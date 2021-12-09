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
#include "calculatemersenne.h"

/*
 * @brief Calculate a prime of Mersenne.
 * @param const int: the prime number that turns into a prime of Mersenne.
 * @return The prime of Mersenne.
 */
void Mersenne(const int kPrimeNumber) {
  long int mersenne_prime = 0;
  mersenne_prime = pow(2, kPrimeNumber) - 1;
  std::cout << mersenne_prime;

  return;
} 