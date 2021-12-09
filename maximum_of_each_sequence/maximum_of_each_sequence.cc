/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101506371@ull.edu.es
 * @date 8.nov.2020
 * @brief This program reads various sequences of natural number and prints for each one the maximum value of it.
 *
 */

#include <iostream>
#include <vector>

/*
 * @brief Shows the maximum value of a sequence of numbers.
 * @param vector: the vector to be examined
 * @param const int: the lenght of the sequence
 * @return The maximum number in the sequence
 */

int LookingForMax(std::vector<int>& numbers_serie, const int kSerieLength) {
  int max_number = numbers_serie[0];
  for (int i = 0; i < kSerieLength; ++i) {
    for (int j = 0; j < kSerieLength; ++j) {
      if ((numbers_serie[i] >= numbers_serie[j]) && (numbers_serie[i] >= max_number)) {
        max_number = numbers_serie[i];
      }
    }
  }

  return max_number;
}

int main() {
  // std::cout << "Este programa lee una secuencia de números y muestra por pantalla el mayor de esa secuencia" << std::endl;
  // std::cout << "Introduzca la longitud de la secuencia de números: ";
  int serie_length = 0;
  std::vector<int> numbers_serie;
  // std::cout << "Introduzca la secuencia de números: ";
  while (std::cin >> serie_length) {
    numbers_serie.reserve(serie_length);
    for (int i = 0; i < serie_length; ++i) {
      std::cin >> numbers_serie[i];
    }
    std::cout << LookingForMax(numbers_serie, serie_length) << std::endl;
  }

  return 0;
}