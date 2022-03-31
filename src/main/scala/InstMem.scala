
import chisel3._

class InstMem extends Module{
    val io = IO(new Bundle{
        val pc = Input(SInt(64.W))

        val inst = Output(UInt(32.W))
    })

    
}