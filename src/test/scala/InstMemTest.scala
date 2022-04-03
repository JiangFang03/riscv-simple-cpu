
import chisel3.iotesters.PeekPokeTester

class InstMemTest(c : InstMem) extends PeekPokeTester(c){
    poke(c.io.address,1)
    step(1)
    poke(c.io.address,2)
    step(1)

    poke(c.io.address,14)
    step(1)

    poke(c.io.address,15)
    step(1)
}

object InstMemTestMain extends App {
  chisel3.iotesters.Driver.execute(args, () => new InstMem())(c => new InstMemTest(c))
}