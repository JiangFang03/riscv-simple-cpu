
import chisel3._
import chisel3.util._

class AluCtrl extends Module{
    val io = IO(new Bundle{
        val aul_op = Input(UInt(2.W))
        val fun3 = Input(UInt(3.W))
        val fun7 = Input(UInt(7.W))
        val ctrl = Output(UInt(4.W))
    })
    //default value
    io.ctrl := "b0000".U
    switch(io.aul_op) {
        is("b00".U) { io.ctrl := "b0010".U }//ADD +
        is("b01".U) { io.ctrl := "b0110".U }//SUB - 
        is("b10".U) { 
            switch(io.fun3){
                is("b111".U){io.ctrl := "b0000".U}
                is("b110".U){io.ctrl := "b0001".U}
                is("b000".U){Cat("b0".U, io.fun7(5), "b10".U)}
            }
        }
    }
}