# 基于RISC-V的单周期CPU
## 简介
按照《计算机组成与设计：硬件/软件接口 第五版》（Computer Organization and Design: The Hardware/Software Interface） RISC-V EDITION 第四章前半部分单周期 CPU 实现，线路图和端口命名基本一致，支持 `add`, `sub`, `or`, `and`, `ori`, `lw`, `sw`, `beq`。

![image](https://github.com/JiangFang03/riscv-simple-cpu/blob/main/img/single-cycle-cpu.png)
## 环境
- Ubuntu2004
- Verilator
- sbt
- chisel3
- gtkwave

## 文件夹说明
`Makefile`  定义make规则

`insts.txt` 存放测试使用的指令,对应的汇编代码为`instructions.asm`

`src/main/scala` 文件夹存放模块代码

`src/test/scala`  存放对应的测试代码

`generated/` 生成的verilog代码和波形文件（具体的查看Makefile）

## 运行
1、具体操作查看Makefile定义的规则。如运行

`make run`

会生成Top顶层模块及其测试。

2、进入生成的文件夹

`cd generated/top/TopXXXX`

3、查看波形图

`gtkwave Top.vcd`






