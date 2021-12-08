#include <iostream>
#include <string>

bool is_balanced(int n) {
  std::string balanced = " ";
  balanced = std::to_string(n); 
  int add_odd = 0;
  int add_even = 0;
  std::string divisor = "";
  int contador = 0;
  if (balanced.length() % 2 == 0) {
    for (int i = 0; i < balanced.length() / 2; ++i) { 
      divisor = balanced[contador];
      add_odd += std::stoi(divisor);
      contador += 2;
    }
    contador = 1;
    for (int i = 0; i < balanced.length() / 2; ++i) {
      divisor = balanced[contador];
      add_even += std::stoi(divisor);
      contador += 2;  
    }
  }
  else {
    for (int i = 0; i < (balanced.length() / 2) + 1; ++i) {
      divisor = balanced[contador];
      add_odd += std::stoi(divisor);
      contador += 2;
    }
    contador = 1;
    for (int i = 0; i < (balanced.length() / 2); ++i) {
      divisor = balanced[contador];
      add_even += std::stoi(divisor);
      contador += 2;
    }
  }
  if (add_even == add_odd) {
    return true;
  }

  return false;
}

int main() {
  // std::cout << "Este programa indica si es número está balanceado o no" << std::endl;
  int possible_balanced = 0;
  while(std::cin >> possible_balanced) {
    std::cout << is_balanced(possible_balanced) << std::endl; 
  }

  return 0;
}