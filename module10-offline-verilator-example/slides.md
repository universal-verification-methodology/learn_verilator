---
marp: true
title: Offline capstone
paginate: true
---

# Offline capstone

Browser sketches taught lint, coverage, and metrics, they do not compile a DUT with Verilator

---

## In-course verilator-hello
- The monorepo ships a minimal Verilator example beside this curriculum
- No UVM and no cocotb, just Verilator, make, and a binary you execute
- Prerequisites are Verilator on your path plus a C++ toolchain
- Read the hello README for the exact layout before you run

---

## Offline workflow
- Open examples/verilator-hello next to this course
- Change into that folder
- Run make run
- Watch compile and link finish, then stdout showing the AND truth table
- Capture the command and the pass or fail line in your notes
- If something fails, record the stage, compile, link, or run, and the first error line

---

## Offline workflow — try these

```
cd courses/learn_verilator/examples/verilator-hello
make run

```

---

## Pitfalls to watch
- Do not substitute a browser lab for this offline requirement
- Make must run from the hello folder that owns the Makefile
- A sketch pass is not a Verilator pass, offline needs a real binary on your path
- The first compile can take a minute; later rebuilds reuse objects
- If Verilator is missing, install it before blaming RTL

---

## Your turn
- Complete the offline checklist
- Optional stretch: produce a short trace from the same example
- When you are ready, take the short quiz, then continue to the wrap module

