
import chisel3._
import chisel3.util._

class ImmGen extends Module{
    val io = IO(new Bundle{
        val instruction = Input(UInt(32.W))
        val i_imm = Output(SInt(64.W))
        val s_imm = Output(SInt(64.W))
        val b_imm = Output(SInt(64.W))
    })
    // ----- Calculating I-Immediate ------ //
    val i_imm_12 = io.instruction(31, 20)
    val i_imm_32 = Cat(Fill(52, i_imm_12(11)), i_imm_12)
    io.i_imm := i_imm_32.asSInt
    
    // ----- Calculating S-Immediate ------ //
    val s_lower_half = io.instruction(11,7)     // bits 7-11 from 32 bits
    val s_upper_half = io.instruction(31,25)    // bits 25-31 from 32 bits
    var s_imm_12 = Cat(s_upper_half, s_lower_half)    // merging immediates together to form 12 bits
    val s_imm_64 = Cat(Fill(52, s_imm_12(11)), s_imm_12)   // sign extending 12 bits to 32 bits and merging the 12 bit immediate 
    io.s_imm := s_imm_64.asSInt
    
    // ----- Calculating B-Immediate ------ //

}