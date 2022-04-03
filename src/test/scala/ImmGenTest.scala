
import chisel3._
import chisel3.iotesters.PeekPokeTester

class ImmGenTest(c :ImmGen) extends PeekPokeTester(c){
   //I-type 0x00C06E93 ori x29, x0, 12
   poke(c.io.instruction,"h00C06E93".U(32.W))
   step(1)
   expect(c.io.i_imm,12.S)
   //
   //0x007EA223 sw x7, 4(x29)
   poke(c.io.instruction,"h007EA223".U(32.W))
   step(1)
   expect(c.io.s_imm,4.S)

   //0x00540463 beq x8, x5, 0x00000008
   poke(c.io.instruction,"h00540463".U(32.W))
   step(1)
   expect(c.io.b_imm,8.S)
   step(1)
}

object ImmGenTestMain extends App {
  chisel3.iotesters.Driver.execute(args, () => new ImmGen())(c => new ImmGenTest(c))
}