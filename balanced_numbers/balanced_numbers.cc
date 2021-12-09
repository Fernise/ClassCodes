/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101506371@ull.edu.es
 * @date 8.nov.2020
 * @brief This program shows if a number is balanced or not. A number is balanced if the sum of the digits 
 * in even positions is equal to the sum of the digits in odd positions.
 *
 */

#include <iostream>
#include <string>

/*
 * @brief Shows if a number is balanced or not. 
 * @param int: an integer number to be examined
 * @return true or false, depends on if the number it is balanced or not. 
 */

bool is_balanced(int n) {
  std::string balanced = " ";
  balanced = std::to_string(n); 
  int add_odd = 0;
  int add_even = 0;
  std::string divisor = "";
  int contador = 0;
  if (balanced.length() % 2 == 0) {
    for (int i = 0; i < balanced.length() / 2; ++i) { 
      divisor = balanced[contador];
      add_odd += std::stoi(divisor);
      contador += 2;
    }
    contador = 1;
    for (int i = 0; i < balanced.length() / 2; ++i) {
      divisor = balanced[contador];
      add_even += std::stoi(divisor);
      contador += 2;  
    }
  }
  else {
    for (int i = 0; i < (balanced.length() / 2) + 1; ++i) {
      divisor = balanced[contador];
      add_odd += std::stoi(divisor);
      contador += 2;
    }
    contador = 1;
    for (int i = 0; i < (balanced.length() / 2); ++i) {
      divisor = balanced[contador];
      add_even += std::stoi(divisor);
      contador += 2;
    }
  }
  if (add_even == add_odd) {
    return true;
  }

  return false;
}

int main() {
  // std::cout << "Este programa indica si es número está balanceado o no" << std::endl;
  int possible_balanced = 0;
  while(std::cin >> possible_balanced) {
    std::cout << is_balanced(possible_balanced) << std::endl; 
  }

  return 0;
}