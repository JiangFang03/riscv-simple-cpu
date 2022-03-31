
import chisel3._
import chisel3.iotesters.PeekPokeTester

class RegFilesTest(c :RegFiles) extends PeekPokeTester(c){
    poke(c.io.reg_write,1)
    var i = 0
    for(i <- 0 to 31){
        poke(c.io.rd,i.asUInt(32.W))
        poke(c.io.w_data,i.asSInt(64.W))
        step(1)
    }
    

    poke(c.io.rs1,0.U)
    poke(c.io.rs2,2.U)
    step(1)

    poke(c.io.rs1,5.U)
    poke(c.io.rs2,31.U)
    step(1)

    poke(c.io.reg_write,1)
    poke(c.io.rd,0)
    poke(c.io.w_data,32.S)
    poke(c.io.rs1,0.U)
    step(1)

    poke(c.io.reg_write,0)
    poke(c.io.rd,12.U)
    poke(c.io.w_data,100.S)
    poke(c.io.rs1,12.U)
    step(1)

    poke(c.io.reg_write,1)
    step(1)
    poke(c.io.rd,12.U)
    poke(c.io.w_data,100.S)
    poke(c.io.rs1,12.U)
    step(1)
}

object RegFilesTestMain extends App {
  chisel3.iotesters.Driver.execute(args, () => new RegFiles())(c => new RegFilesTest(c))
}