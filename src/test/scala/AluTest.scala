
import chisel3.iotesters.PeekPokeTester

class AluTest(c :Alu) extends PeekPokeTester(c){
   // step(1)
    poke(c.io.oper_a, 1)
    poke(c.io.oper_b, 0)
    // &
    poke(c.io.alu_ctrl, 0) 
    step(1)
   // expect(c.io.result, -4)
    // |
    poke(c.io.alu_ctrl, 1) 
    step(1)
    // +
    poke(c.io.alu_ctrl, 2) 
    step(1)

    // -
    poke(c.io.alu_ctrl, 6) 
    step(1)
   
}

object AluTestMain extends App {
  chisel3.iotesters.Driver.execute(args, () => new Alu())(c => new AluTest(c))
}