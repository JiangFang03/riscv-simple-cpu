
import chisel3._

class RegFiles extends Module{
    val io = IO(new Bundle{
        val reg_write = Input(UInt(1.W)) // write contrl signal
        val rs1 = Input(UInt(5.W))
        val rs2 = Input(UInt(5.W))
        val rd = Input(UInt(5.W))
        val w_data = Input(SInt(64.W))
        
        val r_data1 = Output(SInt(64.W))
        val r_data2 = Output(SInt(64.W))
    })
    //Initialize 32 registers, the initial value is 0, and the length is 64 bits
    val registers = RegInit(VecInit(Seq.fill(32)(0.S(64.W))))
    
    registers(0) := 0.S
    //read the value of rs1 and rs2
    io.r_data1 := registers(io.rs1) 
    io.r_data2 := registers(io.rs2) 
    when(io.reg_write === 1.U) {
        //registers(0)'s value is always 0
        when(io.rd =/= "b00000".U) {
            registers(io.rd) := io.w_data    
        }  
    }
}

object RegFilesMain extends App {
  println("Generating the RegFiles hardware")
  (new chisel3.stage.ChiselStage).emitVerilog(new RegFiles(), Array("--target-dir", "generated/rfs/v"))
}