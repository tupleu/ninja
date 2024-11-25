#include <iostream>

#include "cnobi.h"
#include "cnobi_helper.cc"

void load_state(State* state) {
  std::cout << "load_state" << std::endl;
  // Edge* edge = new Edge();
  // std::cout << state << std::endl;
  // state->edges_.push_back(edge);
  std::string flags = "-O3";
  std::string in = "hello.cc";
  std::string out = "hello.o";
  add_rule(state, "compile", "g++ " + flags + " -c " + in + " -o " + out);
  std::cout << "load_state2" << std::endl;
}
