module RegFiles(
  input         clock,
  input         reset,
  input         io_reg_write,
  input  [4:0]  io_rs1,
  input  [4:0]  io_rs2,
  input  [4:0]  io_rd,
  input  [63:0] io_w_data,
  output [63:0] io_r_data1,
  output [63:0] io_r_data2
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [63:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [63:0] _RAND_30;
  reg [63:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] registers_0; // @[RegFiles.scala 16:28]
  reg [63:0] registers_1; // @[RegFiles.scala 16:28]
  reg [63:0] registers_2; // @[RegFiles.scala 16:28]
  reg [63:0] registers_3; // @[RegFiles.scala 16:28]
  reg [63:0] registers_4; // @[RegFiles.scala 16:28]
  reg [63:0] registers_5; // @[RegFiles.scala 16:28]
  reg [63:0] registers_6; // @[RegFiles.scala 16:28]
  reg [63:0] registers_7; // @[RegFiles.scala 16:28]
  reg [63:0] registers_8; // @[RegFiles.scala 16:28]
  reg [63:0] registers_9; // @[RegFiles.scala 16:28]
  reg [63:0] registers_10; // @[RegFiles.scala 16:28]
  reg [63:0] registers_11; // @[RegFiles.scala 16:28]
  reg [63:0] registers_12; // @[RegFiles.scala 16:28]
  reg [63:0] registers_13; // @[RegFiles.scala 16:28]
  reg [63:0] registers_14; // @[RegFiles.scala 16:28]
  reg [63:0] registers_15; // @[RegFiles.scala 16:28]
  reg [63:0] registers_16; // @[RegFiles.scala 16:28]
  reg [63:0] registers_17; // @[RegFiles.scala 16:28]
  reg [63:0] registers_18; // @[RegFiles.scala 16:28]
  reg [63:0] registers_19; // @[RegFiles.scala 16:28]
  reg [63:0] registers_20; // @[RegFiles.scala 16:28]
  reg [63:0] registers_21; // @[RegFiles.scala 16:28]
  reg [63:0] registers_22; // @[RegFiles.scala 16:28]
  reg [63:0] registers_23; // @[RegFiles.scala 16:28]
  reg [63:0] registers_24; // @[RegFiles.scala 16:28]
  reg [63:0] registers_25; // @[RegFiles.scala 16:28]
  reg [63:0] registers_26; // @[RegFiles.scala 16:28]
  reg [63:0] registers_27; // @[RegFiles.scala 16:28]
  reg [63:0] registers_28; // @[RegFiles.scala 16:28]
  reg [63:0] registers_29; // @[RegFiles.scala 16:28]
  reg [63:0] registers_30; // @[RegFiles.scala 16:28]
  reg [63:0] registers_31; // @[RegFiles.scala 16:28]
  wire [63:0] _GEN_1 = 5'h1 == io_rs1 ? $signed(registers_1) : $signed(registers_0); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_2 = 5'h2 == io_rs1 ? $signed(registers_2) : $signed(_GEN_1); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_3 = 5'h3 == io_rs1 ? $signed(registers_3) : $signed(_GEN_2); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_4 = 5'h4 == io_rs1 ? $signed(registers_4) : $signed(_GEN_3); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_5 = 5'h5 == io_rs1 ? $signed(registers_5) : $signed(_GEN_4); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_6 = 5'h6 == io_rs1 ? $signed(registers_6) : $signed(_GEN_5); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_7 = 5'h7 == io_rs1 ? $signed(registers_7) : $signed(_GEN_6); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_8 = 5'h8 == io_rs1 ? $signed(registers_8) : $signed(_GEN_7); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_9 = 5'h9 == io_rs1 ? $signed(registers_9) : $signed(_GEN_8); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_10 = 5'ha == io_rs1 ? $signed(registers_10) : $signed(_GEN_9); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_11 = 5'hb == io_rs1 ? $signed(registers_11) : $signed(_GEN_10); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_12 = 5'hc == io_rs1 ? $signed(registers_12) : $signed(_GEN_11); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_13 = 5'hd == io_rs1 ? $signed(registers_13) : $signed(_GEN_12); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_14 = 5'he == io_rs1 ? $signed(registers_14) : $signed(_GEN_13); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_15 = 5'hf == io_rs1 ? $signed(registers_15) : $signed(_GEN_14); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_16 = 5'h10 == io_rs1 ? $signed(registers_16) : $signed(_GEN_15); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_17 = 5'h11 == io_rs1 ? $signed(registers_17) : $signed(_GEN_16); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_18 = 5'h12 == io_rs1 ? $signed(registers_18) : $signed(_GEN_17); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_19 = 5'h13 == io_rs1 ? $signed(registers_19) : $signed(_GEN_18); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_20 = 5'h14 == io_rs1 ? $signed(registers_20) : $signed(_GEN_19); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_21 = 5'h15 == io_rs1 ? $signed(registers_21) : $signed(_GEN_20); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_22 = 5'h16 == io_rs1 ? $signed(registers_22) : $signed(_GEN_21); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_23 = 5'h17 == io_rs1 ? $signed(registers_23) : $signed(_GEN_22); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_24 = 5'h18 == io_rs1 ? $signed(registers_24) : $signed(_GEN_23); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_25 = 5'h19 == io_rs1 ? $signed(registers_25) : $signed(_GEN_24); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_26 = 5'h1a == io_rs1 ? $signed(registers_26) : $signed(_GEN_25); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_27 = 5'h1b == io_rs1 ? $signed(registers_27) : $signed(_GEN_26); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_28 = 5'h1c == io_rs1 ? $signed(registers_28) : $signed(_GEN_27); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_29 = 5'h1d == io_rs1 ? $signed(registers_29) : $signed(_GEN_28); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_30 = 5'h1e == io_rs1 ? $signed(registers_30) : $signed(_GEN_29); // @[RegFiles.scala 20:{16,16}]
  wire [63:0] _GEN_33 = 5'h1 == io_rs2 ? $signed(registers_1) : $signed(registers_0); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_34 = 5'h2 == io_rs2 ? $signed(registers_2) : $signed(_GEN_33); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_35 = 5'h3 == io_rs2 ? $signed(registers_3) : $signed(_GEN_34); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_36 = 5'h4 == io_rs2 ? $signed(registers_4) : $signed(_GEN_35); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_37 = 5'h5 == io_rs2 ? $signed(registers_5) : $signed(_GEN_36); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_38 = 5'h6 == io_rs2 ? $signed(registers_6) : $signed(_GEN_37); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_39 = 5'h7 == io_rs2 ? $signed(registers_7) : $signed(_GEN_38); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_40 = 5'h8 == io_rs2 ? $signed(registers_8) : $signed(_GEN_39); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_41 = 5'h9 == io_rs2 ? $signed(registers_9) : $signed(_GEN_40); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_42 = 5'ha == io_rs2 ? $signed(registers_10) : $signed(_GEN_41); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_43 = 5'hb == io_rs2 ? $signed(registers_11) : $signed(_GEN_42); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_44 = 5'hc == io_rs2 ? $signed(registers_12) : $signed(_GEN_43); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_45 = 5'hd == io_rs2 ? $signed(registers_13) : $signed(_GEN_44); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_46 = 5'he == io_rs2 ? $signed(registers_14) : $signed(_GEN_45); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_47 = 5'hf == io_rs2 ? $signed(registers_15) : $signed(_GEN_46); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_48 = 5'h10 == io_rs2 ? $signed(registers_16) : $signed(_GEN_47); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_49 = 5'h11 == io_rs2 ? $signed(registers_17) : $signed(_GEN_48); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_50 = 5'h12 == io_rs2 ? $signed(registers_18) : $signed(_GEN_49); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_51 = 5'h13 == io_rs2 ? $signed(registers_19) : $signed(_GEN_50); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_52 = 5'h14 == io_rs2 ? $signed(registers_20) : $signed(_GEN_51); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_53 = 5'h15 == io_rs2 ? $signed(registers_21) : $signed(_GEN_52); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_54 = 5'h16 == io_rs2 ? $signed(registers_22) : $signed(_GEN_53); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_55 = 5'h17 == io_rs2 ? $signed(registers_23) : $signed(_GEN_54); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_56 = 5'h18 == io_rs2 ? $signed(registers_24) : $signed(_GEN_55); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_57 = 5'h19 == io_rs2 ? $signed(registers_25) : $signed(_GEN_56); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_58 = 5'h1a == io_rs2 ? $signed(registers_26) : $signed(_GEN_57); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_59 = 5'h1b == io_rs2 ? $signed(registers_27) : $signed(_GEN_58); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_60 = 5'h1c == io_rs2 ? $signed(registers_28) : $signed(_GEN_59); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_61 = 5'h1d == io_rs2 ? $signed(registers_29) : $signed(_GEN_60); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_62 = 5'h1e == io_rs2 ? $signed(registers_30) : $signed(_GEN_61); // @[RegFiles.scala 21:{16,16}]
  assign io_r_data1 = 5'h1f == io_rs1 ? $signed(registers_31) : $signed(_GEN_30); // @[RegFiles.scala 20:{16,16}]
  assign io_r_data2 = 5'h1f == io_rs2 ? $signed(registers_31) : $signed(_GEN_62); // @[RegFiles.scala 21:{16,16}]
  always @(posedge clock) begin
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_0 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h0 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_0 <= io_w_data; // @[RegFiles.scala 25:30]
        end else begin
          registers_0 <= 64'sh0; // @[RegFiles.scala 18:18]
        end
      end else begin
        registers_0 <= 64'sh0; // @[RegFiles.scala 18:18]
      end
    end else begin
      registers_0 <= 64'sh0; // @[RegFiles.scala 18:18]
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_1 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h1 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_1 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_2 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h2 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_2 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_3 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h3 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_3 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_4 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h4 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_4 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_5 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h5 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_5 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_6 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h6 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_6 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_7 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h7 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_7 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_8 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h8 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_8 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_9 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h9 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_9 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_10 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'ha == io_rd) begin // @[RegFiles.scala 25:30]
          registers_10 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_11 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'hb == io_rd) begin // @[RegFiles.scala 25:30]
          registers_11 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_12 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'hc == io_rd) begin // @[RegFiles.scala 25:30]
          registers_12 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_13 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'hd == io_rd) begin // @[RegFiles.scala 25:30]
          registers_13 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_14 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'he == io_rd) begin // @[RegFiles.scala 25:30]
          registers_14 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_15 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'hf == io_rd) begin // @[RegFiles.scala 25:30]
          registers_15 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_16 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h10 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_16 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_17 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h11 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_17 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_18 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h12 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_18 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_19 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h13 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_19 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_20 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h14 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_20 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_21 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h15 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_21 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_22 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h16 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_22 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_23 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h17 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_23 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_24 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h18 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_24 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_25 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h19 == io_rd) begin // @[RegFiles.scala 25:30]
          registers_25 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_26 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h1a == io_rd) begin // @[RegFiles.scala 25:30]
          registers_26 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_27 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h1b == io_rd) begin // @[RegFiles.scala 25:30]
          registers_27 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_28 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h1c == io_rd) begin // @[RegFiles.scala 25:30]
          registers_28 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_29 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h1d == io_rd) begin // @[RegFiles.scala 25:30]
          registers_29 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_30 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h1e == io_rd) begin // @[RegFiles.scala 25:30]
          registers_30 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 16:28]
      registers_31 <= 64'sh0; // @[RegFiles.scala 16:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 22:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 24:36]
        if (5'h1f == io_rd) begin // @[RegFiles.scala 25:30]
          registers_31 <= io_w_data; // @[RegFiles.scala 25:30]
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  registers_0 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  registers_1 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  registers_2 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  registers_3 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  registers_4 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  registers_5 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  registers_6 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  registers_7 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  registers_8 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  registers_9 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  registers_10 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  registers_11 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  registers_12 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  registers_13 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  registers_14 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  registers_15 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  registers_16 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  registers_17 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  registers_18 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  registers_19 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  registers_20 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  registers_21 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  registers_22 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  registers_23 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  registers_24 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  registers_25 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  registers_26 = _RAND_26[63:0];
  _RAND_27 = {2{`RANDOM}};
  registers_27 = _RAND_27[63:0];
  _RAND_28 = {2{`RANDOM}};
  registers_28 = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  registers_29 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  registers_30 = _RAND_30[63:0];
  _RAND_31 = {2{`RANDOM}};
  registers_31 = _RAND_31[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
