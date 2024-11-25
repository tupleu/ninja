#include <string>

#include "../src/state.h"

enum ReservedBinding {
  Command,
  Depfile,
  Dyndep,
  Description,
  Deps,
  Generator,
  Pool,
  Restat,
  Rspfile,
  RspfileContent,
  MSVCDepsPrefix,
};
const std::string rb_[] = {
  "command",         "depfile", "dyndep", "description", "deps",
  "generator",       "pool",    "restat", "rspfile",     "rspfile_content",
  "msvc_deps_prefi",
};

// const std::string Command = "command";

void add_rule(State* state, std::string name,  // ReservedBinding rb,
              std::string command_value) {
  Rule* rule = new Rule(name);
  EvalString es;
  es.AddText(command_value);
  rule->AddBinding("command", es);
  state->bindings_.AddRule(rule);
}
