#include <iostream>
#include <vector>
// #include "calculatemersenne.h"
#include "calculatemersenne.cc"


int main(int argc, char *argv[]) { 
  if (argc == 1) {
    std::cout << "mersenne: falta un número natural como parámetro" << std::endl;
    std::cout << "Pruebe 'mersenne --help' para más información." << std::endl;
    return 0;
  }
  std::string parameter = argv[1];
  if (parameter == "--help") {
    std::cout << "Este programa muestra una cantidad determinada de números primos de Mersenne" << std::endl;
    std::cout << "Introduzca la cantidad de la siguiente manera: 'mersenne 4'" << std::endl;
    return 0;
  }
  int parameter2 = std::stoi(argv[1]);
  int auxiliar = parameter2;
  int possible_prime = 2;
  int number_possible_prime = 0;
  for (int i = 0; i < parameter2; ++i) {
    if ((possible_prime == 2) || (possible_prime == 3) || (possible_prime == 5) || (possible_prime == 7) || (possible_prime == 13) || (possible_prime == 17) || (possible_prime == 19)) {
      Mersenne(possible_prime);
      std::cout << "\n";
      ++possible_prime;
      ++number_possible_prime;
    }
    if ((possible_prime == 31) || (possible_prime == 61) || (possible_prime == 89) || (possible_prime == 107)) {
      Mersenne(possible_prime);
      std::cout << "\n";
      ++possible_prime;
      ++number_possible_prime;
    }
    if (possible_prime != 2) {
      if ((possible_prime % 2 == 0) || (possible_prime == 9) || (possible_prime == 11) || (possible_prime == 15) || ((possible_prime >= 20) && (possible_prime <= 30)) || 
      ((possible_prime >= 32) && (possible_prime <= 59)) || ((possible_prime >= 67) && (possible_prime <= 83)) || ((possible_prime >= 97) && (possible_prime <= 103)) || 
      (possible_prime == 109) || (possible_prime == 113) || (possible_prime >= 131)) {
        ++possible_prime;
        ++parameter2;
      }
    }
    if (number_possible_prime == auxiliar) {
      i = parameter2;
    }
  }
  
  return 0;
}