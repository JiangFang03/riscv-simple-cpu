
import chisel3._
import chisel3.util._


class Top extends Module{
    val io = IO(new Bundle{
        val reg_out = Output(SInt(64.W))
    })

    val pc = Module(new Pc())
    val imem = Module(new InstMem())
    val reg_files = Module(new RegFiles())
    val alu = Module(new Alu())
    val alu_ctrl = Module(new AluCtrl())
    val ctrl = Module(new Ctrl())
    val imm_gen = Module(new ImmGen())
    val dmem = Module(new DataMem())

    //instructions memory and pc inputs
    imem.io.address := pc.io.out(11,2).asUInt
    val instruction = imem.io.inst
    pc.io.in := pc.io.pc4

    //send opcode to control
    ctrl.io.inst := instruction
    imm_gen.io.instruction := instruction
    
    //alucp
    alu_ctrl.io.alu_op := ctrl.io.alu_op
    alu_ctrl.io.fun3 := instruction(14,12)
    alu_ctrl.io.fun7 := instruction(30)

    //regfile

    reg_files.io.reg_write := ctrl.io.reg_write
    reg_files.io.rs1 := instruction(19,15)
    reg_files.io.rs2 := instruction(24,20)
    reg_files.io.rd := instruction(11,7)
    //mem_to_reg ? dmem : alu result
    reg_files.io.w_data := Mux((ctrl.io.mem_to_reg).asBool, dmem.io.read_data, alu.io.result)
    //datamem
    dmem.io.mem_write := ctrl.io.mem_write
    dmem.io.mem_read := ctrl.io.mem_read
    dmem.io.address := alu.io.result(11,2)
    dmem.io.write_data := reg_files.io.r_data2
    //immediate 
    val imm = Wire ( SInt (64.W) )
    imm := 0.S(64.W)
    when(instruction(6,0) === "b0000011".U){//I-type
        imm := imm_gen.io.i_imm
    }.elsewhen(instruction(6,0) === "b0100011".U){//S-type
        imm := imm_gen.io.s_imm
    }.elsewhen(instruction(6,0) === "b1100011".U){//B type
        imm := imm_gen.io.b_imm
    }

    //alu
    alu.io.oper_a := reg_files.io.r_data1
    alu.io.oper_b := Mux((ctrl.io.alu_src).asBool, imm, reg_files.io.r_data2)
    alu.io.alu_ctrl := alu_ctrl.io.alu_ctrl
    
    //pc = pc + 
    when((alu.io.zero).asBool && (ctrl.io.branch).asBool){
        pc.io.in := pc.io.out + imm
    }
    io.reg_out := reg_files.io.r_data1
    //io.reg_out := 0.S(64.W)
}

object TopMain extends App {
  println("Generating the Top hardware")
  (new chisel3.stage.ChiselStage).emitVerilog(new Top(), Array("--target-dir", "generated/top/v"))
}