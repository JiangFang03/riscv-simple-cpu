
import chisel3._
import chisel3.util._


class Alu extends Module{
    val io = IO(new Bundle{
        val oper_a  = Input(SInt(64.W))
        val oper_b  = Input(SInt(64.W))
        val aluCtrl = Input(UInt(5.W))
        val result  = Output(SInt(64.W))
        val zero  = Output(UInt(1.W))
    })
    val res = Wire(SInt(64.W))
    //default result 
    res := 0.S;
    switch(io.aluCtrl) {
        is("b0000".U) { res := io.oper_a & io.oper_b }//AND
        is("b0001".U) { res := io.oper_a | io.oper_b }//OR
        is("b0010".U) { res := io.oper_a + io.oper_b }//ADD
        is("b0110".U) { res := io.oper_a - io.oper_b }//SUB
    }
    when(res === 0.S){
        io.zero := 1.U
    }.otherwise{
        io.zero := 0.U
    }
    io.result := res
}

object AluMain extends App {
  println("Generating the ALU hardware")
  (new chisel3.stage.ChiselStage).emitVerilog(new Alu(), Array("--target-dir", "generated/alu/v"))
}