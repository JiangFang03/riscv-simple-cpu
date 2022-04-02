module BindsTo_0_InstMem(
  input         clock,
  input  [9:0]  io_address,
  output [31:0] io_inst
);

initial begin
  $readmemh("/home/fangj/ysyx/cpc/riscv-simple-cpu/insts.txt", InstMem.mem);
end
                      endmodule

bind InstMem BindsTo_0_InstMem BindsTo_0_InstMem_Inst(.*);