module ImmGen(
  input         clock,
  input         reset,
  input  [31:0] io_instruction,
  output [63:0] io_i_imm,
  output [63:0] io_s_imm,
  output [63:0] io_b_imm
);
  wire [11:0] i_imm_12 = io_instruction[31:20]; // @[ImmGen.scala 13:34]
  wire [51:0] _i_imm_32_T_2 = i_imm_12[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [4:0] s_lower_half = io_instruction[11:7]; // @[ImmGen.scala 18:38]
  wire [6:0] s_upper_half = io_instruction[31:25]; // @[ImmGen.scala 19:38]
  wire [11:0] s_imm_12 = {s_upper_half,s_lower_half}; // @[Cat.scala 31:58]
  wire [51:0] _s_imm_64_T_2 = s_imm_12[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [3:0] sb_lower_half = io_instruction[11:8]; // @[ImmGen.scala 24:39]
  wire [5:0] sb_upper_half = io_instruction[30:25]; // @[ImmGen.scala 25:39]
  wire  sb_11thbit = io_instruction[7]; // @[ImmGen.scala 26:36]
  wire  sb_12thbit = io_instruction[31]; // @[ImmGen.scala 27:36]
  wire [12:0] sb_imm_13 = {sb_12thbit,sb_11thbit,sb_upper_half,sb_lower_half,1'h0}; // @[Cat.scala 31:58]
  wire [50:0] _sb_imm_64_T_2 = sb_imm_13[12] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 74:12]
  assign io_i_imm = {_i_imm_32_T_2,i_imm_12}; // @[ImmGen.scala 15:26]
  assign io_s_imm = {_s_imm_64_T_2,s_upper_half,s_lower_half}; // @[ImmGen.scala 22:26]
  assign io_b_imm = {_sb_imm_64_T_2,sb_12thbit,sb_11thbit,sb_upper_half,sb_lower_half,1'h0}; // @[ImmGen.scala 29:61]
endmodule
