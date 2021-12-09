/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101506371@ull.edu.es
 * @date 8.nov.2020
 * @brief This program reads a sequence of natural numbers and for each one prints the number of pairs of consecutive numbers 
 * such that the second number of the pair is greater than the first one.
 *
 */

#include <iostream> 
#include <string>

/*
 * @brief Counts the times that in one pair of numbers the second number higher than the first one.
 * @param string: the string to be examined
 * @return The times each second number in a pair is higher than the first one 
 */
int SecondNumberGreater(const std::string sequence) {
  int first_pair_number = 0;
  int second_pair_number = 0;
  int counter = 0;
  for (int i = 0; i < sequence.length() - 2; ++i) {
    if (sequence[i] != ' ') {
      first_pair_number = static_cast<int>(sequence[i]);
      second_pair_number = static_cast<int>(sequence[i + 2]);
      if (first_pair_number > second_pair_number) {
        continue;
      }
      if (second_pair_number > first_pair_number) {
        ++counter;
      }
    }
  }

  return counter; 
}

int main() {
  // std::cout << "Este programa lee una secuencia de números e imprime por pantalla el número de parejas en las que el segundo número es mayor que el primero" << std::endl;
  int number_sequences = 0;
  std::cin >> number_sequences;
  std::string sequence = "";
  std::cin.ignore();
  // for (int i = 0; i < number_sequences; ++i) {
  while(std::getline(std::cin, sequence)) {
    // std::getline(std::cin, sequence);
    std::cout << SecondNumberGreater(sequence) << std::endl;
  // }
  }

  return 0;
}