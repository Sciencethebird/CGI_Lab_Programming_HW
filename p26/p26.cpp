#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#define FuncDef(cmd) void cmd_##cmd() { printf("cmd: "#cmd"\n"); }
#define RegFunc(cmd) m[#cmd] = cmd_##cmd;

std::map<std::string, void(*)()> m;
FuncDef(quit);
FuncDef(help);
int main() {
  RegFunc(quit);
  RegFunc(help);
  std::string cmd;
  while (getline(std::cin, cmd)) {
    if (m.count(cmd)) (*m[cmd])();
    else printf("Not support %s\n", cmd.c_str());
  }
}
