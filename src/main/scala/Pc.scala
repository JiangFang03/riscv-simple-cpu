
import chisel3._

class Pc extends Module{
    val io = IO(new Bundle{
        val in = Input(SInt(64.W))
        val out = Output(SInt(64.W))
        val pc4 = Output(SInt(64.W))
    })

    val reg = RegInit(0.S(64.W))
    reg := io.in
    //save pc value
    io.out := reg
    io.pc4 := reg + 4.S
}

object PcMain extends App {
  println("Generating the Pc hardware")
  (new chisel3.stage.ChiselStage).emitVerilog(new Pc(), Array("--target-dir", "generated/pc/v"))
}