#include <stdlib.h>
#include <iostream>
#include "../obj_dir/Vtb.h"
#include "verilated.h"

int main(int argc, char **argv) {
	// Initialize Verilators variables
	Verilated::commandArgs(argc, argv);

	// Create an instance of our module under test
	Vtb *tb = new Vtb;

	// Tick the clock until we are done
  int resetCycles = 100;
  for(int i = 0; i < resetCycles; i++) {
		tb->clk = 1;
		tb->eval();    
    tb->resetn = 0;
		tb->clk = 0;
		tb->eval();
  }

  int i = 0;
	while( !Verilated::gotFinish() ) {
    tb->resetn = 1;
		tb->clk = 1;
		tb->eval();
		tb->clk = 0;
		tb->eval();
    //std::cout << "cpu_state: "+tb->__Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state << std::endl;
	} exit(EXIT_SUCCESS);
}
