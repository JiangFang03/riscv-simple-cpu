
import chisel3._

class DataMem extends Module{
    val width: Int = 64
    
    val io = IO(new Bundle{
        val mem_write = Input(UInt(1.W))//control signal
        val mem_read = Input(UInt(1.W))//control signal
        val address = Input(UInt(10.W))//address to read or wirte
        val write_data = Input(SInt(width.W))//the data to write
        
        val read_data = Output(SInt(width.W))
    })
    //1024-entry
    val mem = Mem(1024, SInt(width.W))

    when(io.mem_write === "b1".U && io.mem_read === "b0".U){
        //store
        mem.write(io.address, io.write_data)
        io.read_data := DontCare
    }.otherwise{
        //load
        io.read_data := mem(io.address)
    }
}

object DataMemMain extends App {
  println("Generating the DataMem hardware")
  (new chisel3.stage.ChiselStage).emitVerilog(new DataMem(), Array("--target-dir", "generated/dm/v"))
}