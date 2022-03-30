
import chisel3._
import chisel3.iotesters.PeekPokeTester

class CtrlTest(c :Ctrl) extends PeekPokeTester(c){
    val r_type   = "b0110011".U
    poke(c.io.inst, r_type)
    step(1)

    val ld_type  = "b0000011".U
    poke(c.io.inst, ld_type)
    step(1)
 
    val sd_type  = "b0100011".U
    poke(c.io.inst, sd_type)
    step(1)

    val beq_type = "b1100011".U
    poke(c.io.inst, beq_type)
    step(1)
    // step(1)

}

object CtrlTestMain extends App {
  chisel3.iotesters.Driver.execute(args, () => new Ctrl())(c => new CtrlTest(c))
}