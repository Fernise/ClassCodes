#include <iostream>
#include <vector>

int RepeatsOfLastNumber(const std::vector<int>& numbers_serie, const int kAmountNumbersSerie) {
  int repeats_last_number = 0;
  for (int j = 0; j < (kAmountNumbersSerie - 1); ++j) {
    if (numbers_serie[j] == numbers_serie[kAmountNumbersSerie - 1]) {
      ++repeats_last_number;
    }
  }

  return repeats_last_number;
}

int main() {
  // std::cout << "Este programa muestra la cantidad de veces que un número de una serie es igual al útlimo de la misma" << std::endl;
  // std::cout << "Introduzca la cantidad de números que contendrá la serie: ";
  int amount_numbers_serie = 0;
  std::cin >> amount_numbers_serie;
  // std::cout << "Introduzca la serie de números: ";
  std::vector<int> numbers_serie;
  numbers_serie.reserve(amount_numbers_serie);
  for (int i = 0; i < amount_numbers_serie; ++i) {
    std::cin >> numbers_serie[i];
  }
  std::cout << RepeatsOfLastNumber(numbers_serie, amount_numbers_serie) << std::endl;

  return 0;
}