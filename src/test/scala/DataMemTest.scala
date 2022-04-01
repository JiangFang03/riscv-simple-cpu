import chisel3._
import chisel3.iotesters.PeekPokeTester

class DataMemTest(c :DataMem) extends PeekPokeTester(c){
   poke(c.io.mem_write,1)
   poke(c.io.mem_read,0)
   poke(c.io.address,0)
   poke(c.io.write_data,5)
   step(1)

   poke(c.io.mem_write,0)
   poke(c.io.mem_read,1)
   poke(c.io.address,0)
   step(1)
   
}

object DataMemTestMain extends App {
  chisel3.iotesters.Driver.execute(args, () => new DataMem())(c => new DataMemTest(c))
}