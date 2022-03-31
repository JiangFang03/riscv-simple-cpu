module AluCtrl(
  input        clock,
  input        reset,
  input  [1:0] io_alu_op,
  input  [2:0] io_fun3,
  input        io_fun7,
  output [3:0] io_alu_ctrl
);
  wire [3:0] _io_alu_ctrl_T = {1'h0,io_fun7,2'h2}; // @[Cat.scala 31:58]
  wire [3:0] _GEN_0 = 3'h0 == io_fun3 ? _io_alu_ctrl_T : 4'h0; // @[AluCtrl.scala 13:17 18:28 21:42]
  wire [3:0] _GEN_1 = 3'h6 == io_fun3 ? 4'h1 : _GEN_0; // @[AluCtrl.scala 18:28 20:42]
  wire [3:0] _GEN_2 = 3'h7 == io_fun3 ? 4'h0 : _GEN_1; // @[AluCtrl.scala 18:28 19:42]
  wire [3:0] _GEN_3 = 2'h2 == io_alu_op ? _GEN_2 : 4'h0; // @[AluCtrl.scala 13:17 14:23]
  wire [3:0] _GEN_4 = 2'h1 == io_alu_op ? 4'h6 : _GEN_3; // @[AluCtrl.scala 14:23 16:35]
  assign io_alu_ctrl = 2'h0 == io_alu_op ? 4'h2 : _GEN_4; // @[AluCtrl.scala 14:23 15:35]
endmodule
