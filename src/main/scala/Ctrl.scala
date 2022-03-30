
import chisel3._
import chisel3.util.Cat

class Ctrl extends Module{
    val io = IO(new Bundle{
        val inst = Input(UInt(32.W))

        val alu_src = Output(UInt(1.W))
        val mem_to_reg = Output(UInt(1.W))
        val reg_write = Output(UInt(1.W))
        val mem_read = Output(UInt(1.W))
        val mem_write = Output(UInt(1.W))
        val branch = Output(UInt(1.W))
        val alu_op = Output(UInt(2.W))
    })
    //extract the opcode of instruction
    val opcode = io.inst(6,0)
    //alu oper_b comes from rs2(0) or imm(1) , such as R-type beq
    io.alu_src := (~io.inst(6)) & (~ (io.inst(5) & io.inst(4)))
    //data from ALU(0) or datamem(1) write to reg
    io.mem_to_reg := (~io.inst(6)) & (~io.inst(5)) & (~io.inst(4))
    io.reg_write := (~io.inst(6)) & (~(io.inst(5) & ~io.inst(4)))
    io.mem_read :=  (~io.inst(6)) & (~io.inst(5)) & (~io.inst(4))
    io.mem_write := (~io.inst(6)) & (io.inst(5) & (~io.inst(4)))
    io.branch := opcode(6)
    var alu_op0 = (io.inst(6)) & (io.inst(5)) & (~io.inst(4))
    var alu_op1 = (~io.inst(6)) & (io.inst(4))
    
    io.alu_op := Cat(alu_op1,alu_op0)
 //   io.alu_op(0) := (io.inst(6)) & (io.inst(5)) & (~io.inst(4))
 //   io.alu_op(1) := (~io.inst(6)) & (io.inst(4))
}

object CtrlMain extends App {
  println("Generating the ALU hardware")
  (new chisel3.stage.ChiselStage).emitVerilog(new Ctrl(), Array("--target-dir", "generated/ctrl/v"))
}