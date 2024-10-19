#include "statscalc-c/statscalc-c.hpp"
#include <iostream>

int main(){
  int result = statscalcc::add_one(1);
  std::cout << "1 + 1 = " << result << std::endl;
}