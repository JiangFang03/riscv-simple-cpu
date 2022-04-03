module ImmGen(
  input         clock,
  input         reset,
  input  [31:0] io_instruction,
  output [63:0] io_i_imm,
  output [63:0] io_s_imm,
  output [63:0] io_b_imm,
  output [63:0] io_u_imm,
  output [63:0] io_j_imm
);
  wire [11:0] i_imm_12 = io_instruction[31:20]; // @[ImmGen.scala 15:34]
  wire [51:0] _i_imm_32_T_2 = i_imm_12[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [4:0] s_lower_half = io_instruction[11:7]; // @[ImmGen.scala 20:38]
  wire [6:0] s_upper_half = io_instruction[31:25]; // @[ImmGen.scala 21:38]
  wire [11:0] s_imm_12 = {s_upper_half,s_lower_half}; // @[Cat.scala 31:58]
  wire [51:0] _s_imm_64_T_2 = s_imm_12[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [3:0] sb_lower_half = io_instruction[11:8]; // @[ImmGen.scala 27:39]
  wire [5:0] sb_upper_half = io_instruction[30:25]; // @[ImmGen.scala 28:39]
  wire  sb_11thbit = io_instruction[7]; // @[ImmGen.scala 29:36]
  wire  sb_12thbit = io_instruction[31]; // @[ImmGen.scala 30:36]
  wire [12:0] sb_imm_13 = {sb_12thbit,sb_11thbit,sb_upper_half,sb_lower_half,1'h0}; // @[Cat.scala 31:58]
  wire [50:0] _sb_imm_64_T_2 = sb_imm_13[12] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 74:12]
  wire [19:0] u_imm_20 = io_instruction[31:12]; // @[ImmGen.scala 36:34]
  wire [43:0] _u_imm_64_T_2 = u_imm_20[19] ? 44'hfffffffffff : 44'h0; // @[Bitwise.scala 74:12]
  wire [63:0] u_imm_64 = {_u_imm_64_T_2,u_imm_20}; // @[Cat.scala 31:58]
  wire [75:0] _GEN_0 = {u_imm_64, 12'h0}; // @[ImmGen.scala 39:37]
  wire [78:0] _io_u_imm_T = {{3'd0}, _GEN_0}; // @[ImmGen.scala 40:34]
  wire [9:0] uj_lower_half = io_instruction[30:21]; // @[ImmGen.scala 43:39]
  wire  uj_11thbit = io_instruction[20]; // @[ImmGen.scala 44:36]
  wire [7:0] uj_upper_half = io_instruction[19:12]; // @[ImmGen.scala 45:39]
  wire [20:0] uj_imm_21 = {sb_12thbit,uj_upper_half,uj_11thbit,uj_lower_half,1'h0}; // @[Cat.scala 31:58]
  wire [42:0] _uj_imm_64_T_2 = uj_imm_21[20] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 74:12]
  assign io_i_imm = {_i_imm_32_T_2,i_imm_12}; // @[ImmGen.scala 17:26]
  assign io_s_imm = {_s_imm_64_T_2,s_upper_half,s_lower_half}; // @[ImmGen.scala 24:26]
  assign io_b_imm = {_sb_imm_64_T_2,sb_12thbit,sb_11thbit,sb_upper_half,sb_lower_half,1'h0}; // @[ImmGen.scala 32:61]
  assign io_u_imm = _io_u_imm_T[63:0]; // @[ImmGen.scala 40:14]
  assign io_j_imm = {_uj_imm_64_T_2,sb_12thbit,uj_upper_half,uj_11thbit,uj_lower_half,1'h0}; // @[ImmGen.scala 49:27]
endmodule
