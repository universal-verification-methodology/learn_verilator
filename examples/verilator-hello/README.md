# Minimal Verilator hello (and-gate, no UVM)

In-course Track A example for `learn_verilator` module **10**.
For **UVM on Verilator**, use [`../../learn_uvm2017/examples/verilator-uvm-hello/`](../../learn_uvm2017/examples/verilator-uvm-hello/) instead.

## Layout

```text
verilator-hello/
├── README.md
├── Makefile
└── dut/and_gate.v
```

## Prerequisites

- Verilator on `PATH`
- `make` + C++ toolchain

## Run

```bash
cd courses/learn_verilator/examples/verilator-hello
make run
./obj_dir/Vtb_and_gate
```

Expected: a tiny C++ harness toggles `a`/`b` and prints `y` for the AND truth table.
