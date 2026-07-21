# Verilator-only and-gate smoke (no UVM / no cocotb)

.PHONY: run clean

run:
	verilator -Wall --cc --exe --build \
		-CFLAGS "-std=c++17" \
		dut/and_gate.v tb/sim_main.cpp \
		--top-module and_gate
	./obj_dir/Vand_gate

clean:
	rm -rf obj_dir
