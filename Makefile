#
# Building Chisel examples without too much sbt/scala/... stuff
#
# sbt looks for default into a folder ./project and . for build.sdt and Build.scala
# sbt creates per default a ./target folder
WORK_DIR  = $(shell pwd)

SBT = sbt

# Generate Verilog code

v-alu:
	$(SBT) "runMain AluMain"

v-aluctrl:
	$(SBT) "runMain AluCtrlMain"

v-ctrl:
	$(SBT) "runMain CtrlMain"

v-pc:
	$(SBT) "runMain PcMain"

v-rfs:
	$(SBT) "runMain RegFilesMain"
# Generate the C++ simulation and run the tests
test-alu:
	$(SBT) "test:runMain AluTestMain -td ./generated/alu --backend-name verilator " 

test-ctrl:
	$(SBT) "test:runMain CtrlTestMain -td ./generated/ctrl --backend-name verilator " 

test-aluctrl:
	$(SBT) "test:runMain AluCtrlTestMain  -td ./generated/aluctrl --backend-name verilator" 

test-rfs:
	$(SBT) "test:runMain RegFilesTestMain  -td ./generated/rfs --backend-name verilator" 



clean:
	rm -rf $(WORK_DIR)/generated/

clean-alu:
	rm -rf $(WORK_DIR)/generated/alu/

clean-ctrl:
	rm -rf $(WORK_DIR)/generated/ctrl/

clean-aluctrl:
	rm -rf $(WORK_DIR)/generated/aluctrl/

clean-rfs:
	rm -rf $(WORK_DIR)/generated/rfs/

.PHONY: clean
