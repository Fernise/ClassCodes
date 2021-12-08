#include <iostream>
#include <vector>

void OrderSeries(std::vector<int>& numbers_serie, const int kSerieLength) {
  int aux = 0;
  for (int i = 0; i < kSerieLength; ++i) {
    for (int j = 0; j < (kSerieLength - 1); ++j) {
      if (numbers_serie[j] > numbers_serie[j + 1]) {
        aux = numbers_serie[j];  
        numbers_serie[j] = numbers_serie[j + 1];
        numbers_serie[j + 1] = aux;
      }   
    }
  }

  return;
}



void TimesRepeated(std::vector<int>& numbers_serie, const int kSerieLength) {
  for (int i = 0; i < kSerieLength; ++i) {
    int contador = 0;
    for (int j = 0; j < kSerieLength; ++j) {
      if (numbers_serie[i] == numbers_serie[j]) {
        ++contador;
      }
    }
    if (numbers_serie[i] != numbers_serie[i - 1]) {
      std::cout << numbers_serie[i] << " : " << contador << std::endl;
    }
  } 

  return;
}


int main() {
  // std::cout << "Este programa lee una secuencia de números enteros e indica cuánto se repite cada número" << std::endl;
  // std::cout << "Introduzca la cantidad de números a introducir: ";
  int serie_length = 0;
  // std::cin >> serie_length;
  // std::cout << "Introduzca la serie de números: ";
  while (std::cin >> serie_length) {
    std::vector<int> numbers_serie;
    numbers_serie.reserve(serie_length);
    for (int i = 0; i < serie_length; ++i) {
      std::cin >> numbers_serie[i]; 
    }
    OrderSeries(numbers_serie, serie_length);
    TimesRepeated(numbers_serie, serie_length);  
  }


  return 0;
}