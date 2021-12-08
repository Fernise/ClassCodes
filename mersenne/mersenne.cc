#include <iostream>
#include <vector>
#include "funciones.h"


int main(int argc, char *argv[]) {
  // int amount_primes = 0;
  std::string parameter = argv[1]; 
  if (argc == 1) {
    std::cout << "mersenne: falta un número natural como parámetro" << std::endl;
    std::cout << "Pruebe 'mersenne --help' para más información." << std::endl;
    return 1;
  }
  if (parameter == "--help") {
    std::cout << "Este programa muestra una cantidad determinada de números primos de Mersenne" << std::endl;
  }
  int parameter2 = std::stoi(argv[1]);
  int counter = 2;
  for (int i = 0; i < parameter2; ++i) {
    if ((counter == 2)) {
      Mersenne(counter);
      std::cout << "\n";
      ++counter;
    }
    if ((counter % 2 != 0) && (counter != 11) && (counter != 9) && (counter != 21)) {
      Mersenne(counter);
      std::cout << "\n";    
      ++counter;
    }
    if (((counter % 2 == 0) || (counter == 11) || (counter == 9)) && (counter == 21) && (counter != 2)) {
      ++counter;
      if (counter == 9) {
        counter += 4;
      }
      if (counter == 15) {
        counter += 2;
      }
      if (counter == 22) {
        counter += 8;
      }
      if (counter == 33) {
        counter += 28;
      }
      if (counter == 63) {
        counter += 26;
      }
      if (counter == 91) {
        counter += 16;
      }
      Mersenne(counter);
      ++counter;
      std::cout << "\n";
    }
    
  }
  
  return 0;
}