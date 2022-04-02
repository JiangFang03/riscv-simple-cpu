
import chisel3._
import chisel3.iotesters.PeekPokeTester

class TopTest(c: Top) extends PeekPokeTester(c) {
    step(1)
    step(1)
    step(1)
    step(1)
    step(1)

    step(1)
    step(1)
    step(1)
    step(1)
    step(1)

    step(1)
    step(1)
    step(1)
    step(1)
    step(1)
}

object TopTestMain extends App {
  chisel3.iotesters.Driver.execute(args, () => new Top())(c => new TopTest(c))
}