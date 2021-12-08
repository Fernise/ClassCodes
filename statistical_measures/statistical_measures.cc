#include <iostream>
#include <vector>

void Minimum(const std::vector<double>& sequence, const int sequence_length) {
  double minimun_number = sequence[0];
  for (int i = 0; i < sequence_length; ++i) {
    if (sequence[i] < minimun_number) {
      minimun_number = sequence[i];
    }
  }
  std::cout << std::fixed;
  std::cout.precision(4);
  std::cout << minimun_number << " ";

  return;
}

void Maximum(const std::vector<double>& sequence, const int sequence_length) {
  double maximum_number = sequence[0];
  for (int i = 0; i < sequence_length; ++i) {
    if (sequence[i] > maximum_number) {
      maximum_number = sequence[i];
    }
  }
  std::cout << maximum_number << " ";

  return;
}

void Average(const std::vector<double>& sequence, const int sequence_length) {
  double average_number = 0;
  for (int i = 0; i < sequence_length; ++i) {
    average_number += sequence[i];
  }
  average_number /= sequence_length;
  std::cout << average_number << std::endl;

  return;
}

int main() {
  // std::cout << "Este programa lee una secuencia de números y muestra por pantalla su mínimo, máximo y media" << std::endl;
  int number_sequences = 0;
  std::cin >> number_sequences;
  int sequence_length = 0;
  while (std::cin >> sequence_length) {
    std::vector<double> sequence;
    sequence.reserve(sequence_length);
    for (int i = 0; i < sequence_length; ++i) {
      std::cin >> sequence[i];
    }
    Minimum(sequence, sequence_length); 
    Maximum(sequence, sequence_length);
    Average(sequence, sequence_length);
  }

  return 0;
}