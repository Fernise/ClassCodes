#include <iostream>
#include <cmath>
#include "calculatemersenne.h"

void Mersenne(const int kPrimeNumber) {
  long int mersenne_prime = 0;
  mersenne_prime = pow(2, kPrimeNumber) - 1;
  std::cout << mersenne_prime;

  return;
} 