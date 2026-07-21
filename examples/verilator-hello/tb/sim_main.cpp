// Minimal Verilator C++ harness for and_gate
#include "Vand_gate.h"
#include "verilated.h"
#include <cstdio>

static void check(Vand_gate* top, int a, int b, int exp) {
  top->a = a;
  top->b = b;
  top->eval();
  int y = top->y;
  std::printf("a=%d b=%d y=%d (expect %d) %s\n", a, b, y, exp, (y == exp) ? "OK" : "FAIL");
}

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  Vand_gate* top = new Vand_gate;
  check(top, 0, 0, 0);
  check(top, 0, 1, 0);
  check(top, 1, 0, 0);
  check(top, 1, 1, 1);
  delete top;
  return 0;
}
