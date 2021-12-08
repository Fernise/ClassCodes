#include <iostream>
#include <string>
#include <cmath>
// #include "calculatearmstrong.h"
#include "calculatearmstrong.cc"

int main(int argc, char *argv[]) {
  // std::cout << "Este programa indica si un número es Armstrong o no lo es" << std::endl;
  std::string possible_armstrong = " ";
  possible_armstrong = argv[1];
  std::cout << CalculateArmstrong(possible_armstrong) << std::endl;

  return 0;
}