
import chisel3._
import chisel3.util.experimental.loadMemoryFromFile 


class InstMem extends Module{
    val io = IO(new Bundle{
        val address = Input(UInt(10.W))

        val inst = Output(UInt(32.W))
    })

    val mem = Mem(1024,UInt(32.W))
    
    loadMemoryFromFile(mem,"/home/fangj/ysyx/cpc/riscv-simple-cpu/insts.txt")

    io.inst := mem(io.address)
    
}

object InstMemMain extends App {
  println("Generating the InstMem hardware")
  (new chisel3.stage.ChiselStage).emitVerilog(new InstMem(), Array("--target-dir", "generated/im/v"))
}