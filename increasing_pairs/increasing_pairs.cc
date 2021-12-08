#include <iostream> 
#include <string>

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