#include <iostream>
#include <string>
#include <cmath>

int main() {
  std::cout << "Este programa indica si un número es Armstrong o no lo es" << std::endl;
  std::string possible_armstrong = " ";
  std::cin >> possible_armstrong;
  int add = 0;
  char aux = ' ';
  int digits = 0;
  for (int i = 0; i < possible_armstrong.length(); ++i) {
    if (possible_armstrong[i] != 0) {
      aux = possible_armstrong[i];
      digits = static_cast<int>(aux) - 48;
      add += pow(digits, possible_armstrong.length());
    }
    if (possible_armstrong[i] == 0) {
      add += 0;
    }
  }
  if (possible_armstrong == std::to_string(add)) {
    std::cout << possible_armstrong << " is an Armstrong number" << std::endl;
  }
  else {
    std::cout << possible_armstrong << " is not an Armstrong number" << std::endl;
  }

  return 0;
}