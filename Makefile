#
# Building Chisel examples without too much sbt/scala/... stuff
#
# sbt looks for default into a folder ./project and . for build.sdt and Build.scala
# sbt creates per default a ./target folder
WORK_DIR  = $(shell pwd)

SBT = sbt


# Generate Verilog code

alu:
	$(SBT) "runMain AluMain"
ctrl:
	$(SBT) "runMain CtrlMain"


# Generate the C++ simulation and run the tests
alu-test:
	$(SBT) "test:runMain AluTestMain -td ./generated/alu --backend-name verilator " 

ctrl-test:
	$(SBT) "test:runMain CtrlTestMain -td ./generated/ctrl --backend-name verilator " 


clean:
	rm -rf $(WORK_DIR)/generated/

clean-alu:
	rm -rf $(WORK_DIR)/generated/alu/

clean-ctrl:
	rm -rf $(WORK_DIR)/generated/ctrl/

.PHONY: clean
