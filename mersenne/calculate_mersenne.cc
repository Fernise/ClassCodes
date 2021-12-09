/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101506371@ull.edu.es
 * @date 8.nov.2020
 * @brief This file contains the function which calculate the primes numbers of Mersenne.
 *
 */

#include <iostream>
#include <cmath>
#include "calculate_mersenne.h"

/** It shows the correct use of the program, otherwise it shows a message
 *  The program just need a natural number for its execution.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << "mersenne: falta un número natural como parámetro" << std::endl;
    std::cout << "Pruebe 'mersenne --help' para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter = argv[1];
  if (parameter == "--help") {
    std::cout << "Este programa muestra una cantidad determinada de números primos de Mersenne" << std::endl;
    std::cout << "Introduzca la cantidad de la siguiente manera: 'mersenne 4'" << std::endl;
    exit(EXIT_SUCCESS);
  }

  return;
}

/*
 * @brief Calculate a prime of Mersenne.
 * @param const int: the prime number that turns into a prime of Mersenne.
 * @return The prime of Mersenne.
 */
void Mersenne(int parameter2) {
  long int mersenne_prime = 0;
  int auxiliar = parameter2;
  int possible_prime = 2;
  int number_of_primes = 0;
  for (int i = 0; i < parameter2; ++i) {
    if ((possible_prime == 2) || (possible_prime == 3) || (possible_prime == 5) || (possible_prime == 7) || (possible_prime == 13) || (possible_prime == 17) || (possible_prime == 19)) {
      mersenne_prime = pow(2, possible_prime) - 1;
      std::cout << mersenne_prime;
      std::cout << "\n";
      ++possible_prime;
      ++number_of_primes;
    }
    if ((possible_prime == 31) || (possible_prime == 61) || (possible_prime == 89) || (possible_prime == 107)) {
      mersenne_prime = pow(2, possible_prime) - 1;
      std::cout << mersenne_prime;
      std::cout << "\n";
      ++possible_prime;
      ++number_of_primes;
    }
    if (possible_prime != 2) {
      if ((possible_prime % 2 == 0) || (possible_prime == 9) || (possible_prime == 11) || (possible_prime == 15) || ((possible_prime >= 20) && (possible_prime <= 30)) || 
      ((possible_prime >= 32) && (possible_prime <= 59)) || ((possible_prime >= 67) && (possible_prime <= 83)) || ((possible_prime >= 97) && (possible_prime <= 103)) || 
      (possible_prime == 109) || (possible_prime == 113) || (possible_prime >= 131)) {
        ++possible_prime;
        ++parameter2;
      }
    }
    if (number_of_primes == auxiliar) {
      i = parameter2;
    }
  }

  return;
} 