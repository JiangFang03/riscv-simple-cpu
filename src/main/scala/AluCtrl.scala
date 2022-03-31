
import chisel3._
import chisel3.util._

class AluCtrl extends Module{
    val io = IO(new Bundle{
        val alu_op = Input(UInt(2.W))
        val fun3 = Input(UInt(3.W))
        val fun7 = Input(UInt(1.W))
        val alu_ctrl = Output(UInt(4.W))
    })
    //default value
    io.alu_ctrl := "b0000".U
    switch(io.alu_op) {
        is("b00".U) { io.alu_ctrl := "b0010".U }//ADD +
        is("b01".U) { io.alu_ctrl := "b0110".U }//SUB - 
        is("b10".U) { 
            switch(io.fun3){
                is("b111".U){io.alu_ctrl := "b0000".U}
                is("b110".U){io.alu_ctrl := "b0001".U}
                is("b000".U){io.alu_ctrl := Cat("b0".U, io.fun7, "b10".U)}
            }
        }
    }
}

object AluCtrlMain extends App {
  println("Generating the ALUCtrl hardware")
  (new chisel3.stage.ChiselStage).emitVerilog(new AluCtrl(), Array("--target-dir", "generated/aluctrl/v"))
}