# Module 10 — Build & run a Verilator example

**Module id:** module10-offline-verilator-example
**Lab:** none (offline · course Makefile)
**Tracks:** A only

## Slide 1 — Offline capstone

Browser sketches taught lint, coverage, and metrics—they do not compile a DUT with Verilator. This module is Track A only: you build and run the in-course and-gate hello on your machine. You leave with a command line you can repeat—change directory, make run, read pass or fail. No browser lab required here—just the live toolchain.

## Slide 2 — In-course verilator-hello

The monorepo ships a minimal Verilator example beside this curriculum: a Makefile, a small and-gate DUT, and a C++ testbench harness. No UVM and no cocotb—just Verilator, make, and a binary you execute. Prerequisites are Verilator on your path plus a C++ toolchain. Read the hello README for the exact layout before you run.

## Slide 3 — Offline workflow

Open examples/verilator-hello next to this course. Change into that folder. Run make run—the Makefile invokes Verilator to compile the DUT and harness, links a binary under obj_dir, and runs it. Watch compile and link finish, then stdout showing the AND truth table. Capture the command and the pass or fail line in your notes. If something fails, record the stage—compile, link, or run—and the first error line.

```bash
cd courses/learn_verilator/examples/verilator-hello
make run
```

## Slide 4 — Pitfalls to watch

Do not substitute a browser lab for this offline requirement. Make must run from the hello folder that owns the Makefile—the wrong directory fails quietly. A sketch pass is not a Verilator pass—offline needs a real binary on your path. The first compile can take a minute; later rebuilds reuse objects. If Verilator is missing, install it before blaming RTL.

## Slide 5 — Your turn

Complete the offline checklist: one real build and run from examples/verilator-hello, commands and outcome recorded. Optional stretch: produce a short trace from the same example. When you are ready, take the short quiz, then continue to the wrap module.
