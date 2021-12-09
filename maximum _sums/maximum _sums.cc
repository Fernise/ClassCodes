/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101506371@ull.edu.es
 * @date 8.nov.2020
 * @brief This program reads a sequence of natural numbers and prints the maximum quantity that can be obtained by adding 
 * numbers consecutively from the beginning, and the maximum quantity that can be obtained by adding numbers consecutively from the end.
 *
 */

#include <iostream>
#include <vector>

/*
 * @brief Calculate the maximum quantity in a sequence that can be obtained by adding 
 * numbers consecutively from the beginning and the other way around. 
 * @param vector: the vector to be examined
 * @param const int: the lenght of the sequence
 * @return The maximum quantity adding numbers from the begining and the other way around
 */
void MaximumAdds(std::vector<int>& numbers_serie, const int kSerieLength) {
  int possible_max_add_start = 0;
  int possible_max_add_end = 0;
  int max_add_start = 0;
  int max_add_end = 0;
  for (int j = 0; j < kSerieLength; ++j) { 
    possible_max_add_start += numbers_serie[j];
    if (max_add_start < possible_max_add_start) {
      max_add_start = possible_max_add_start; 
    }
  }
  std::cout << max_add_start << " ";
  for (int j = (kSerieLength - 1); j >= 0; --j) {
    possible_max_add_end += numbers_serie[j];
    if (max_add_end < possible_max_add_end) {
      max_add_end = possible_max_add_end;
    }
  }
  std::cout << max_add_end << std::endl;

  return;
}


int main() {
  // std::cout << "Este programa lee una secuencia de números e imprime por pantalla la máxima cantidad obtenida de la suma desde la posicion 0 y desde la última posición" << std::endl;
  int serie_length = 0;
  std::vector<int> numbers_serie;
  // std::cout << "Introduzca la longitud de la serie de números: ";
  while (std::cin >> serie_length) {
    numbers_serie.reserve(serie_length);
    // std::cout << "Introduzca la serie de números: ";
    for (int i = 0; i < serie_length; ++i) {
      std::cin >> numbers_serie[i];
    }
    MaximumAdds(numbers_serie, serie_length);
  }

  return 0;
}