#include <iostream>
#include <cmath>

void Mersenne(int prime_number) {
  int mersenne_prime = 0;
  mersenne_prime = pow(2, prime_number) - 1;
  std::cout << mersenne_prime;

  return;
} 