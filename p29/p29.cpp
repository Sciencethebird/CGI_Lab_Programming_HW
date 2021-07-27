#include <iostream>
#include <string>
using std::string;
void add_argument(string name, string long_name, string desc, bool required = false) {
  std::cout << "long version " << required << std::endl;
}
void add_argument(string name, string desc, bool required = false) {
  std::cout << "short version " << required << std::endl;
}
int main() {
    string t = "definitely a string";
    add_argument("-h", "--help", t);   // long version
    add_argument("-h", "--help", "Show Help Menu"); // short version
}
