
import chisel3._
import chisel3.iotesters.PeekPokeTester

class AluCtrlTest(c :AluCtrl) extends PeekPokeTester(c){
    
    //ld \sd
    poke(c.io.alu_op,"b00".U)
    expect(c.io.alu_ctrl,"b0010".U)
    step(1)

    //beq
    poke(c.io.alu_op,"b01".U)    
    expect(c.io.alu_ctrl,"b0110".U)
    step(1)

    //R-type add
    poke(c.io.alu_op,"b10".U)
    poke(c.io.fun7,"b0".U)
    poke(c.io.fun3,"b000".U)
    expect(c.io.alu_ctrl,"b0010".U)
    step(1)
     //R-type add
    poke(c.io.alu_op,"b10".U)
    poke(c.io.fun7,"b0".U)
    poke(c.io.fun3,"b000".U)
    expect(c.io.alu_ctrl,"b0010".U)
    step(1)

    //R-type sub
    poke(c.io.alu_op,"b10".U)
    poke(c.io.fun7,"b1".U)
    poke(c.io.fun3,"b000".U)
    expect(c.io.alu_ctrl,"b0110".U)
    step(1)
    //R-type and
    poke(c.io.alu_op,"b10".U)
    poke(c.io.fun7,"b0".U)
    poke(c.io.fun3,"b111".U)
    expect(c.io.alu_ctrl,"b0000".U)
    step(1)
    //R-type or
    poke(c.io.alu_op,"b10".U)
    poke(c.io.fun7,"b0".U)
    poke(c.io.fun3,"b110".U)
    expect(c.io.alu_ctrl,"b0001".U)
    step(1)
}

object AluCtrlTestMain extends App {
  chisel3.iotesters.Driver.execute(args, () => new AluCtrl())(c => new AluCtrlTest(c))
}