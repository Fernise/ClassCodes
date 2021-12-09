/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101506371@ull.edu.es
 * @date 8.nov.2020
 * @brief This program reads a sequence of natural numbers and prints how many of them are equal to the last one.
 *
 */

#include <iostream>
#include <vector>

/*
 * @brief Counts how many time a number is equal to last one in a sequence.
 * @param vector: the string to be examined
 * @param const int: the length of the sequence
 * @return the amount of times one number is equal to the last one
 */
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