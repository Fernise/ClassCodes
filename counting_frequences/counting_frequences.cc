#include <iostream>
#include <vector>

/*
void TimesRepeated(std::vector<int>& numbers_serie, const int kSerieLength) {
  std::vector<int> ordered_serie;
  for (int i = 0; i < kSerieLength; ++i) {
    int contador = 0;
    for (int j = 0; j < kSerieLength; ++j) {
      if (numbers_serie[i] == numbers_serie[j]) {
        ++contador;
      }
    }
    std::cout << numbers_serie[i] << " : " << contador << std::endl;
  }

  return;
}
*/

void OrderSeries(std::vector<int>& numbers_serie, const int kSerieLength) {
  int aux = 0;
  for (int i = 0; i < kSerieLength; ++i) {
    for (int j = 0; j < kSerieLength; ++j) {
      if (numbers_serie[j] > numbers_serie[j + 1]) {
        aux = numbers_serie[j];  
        numbers_serie[j] = numbers_serie[j + 1];
        numbers_serie[j + 1] = aux;
      }   
    }
  }
  for (int i = 0; i < kSerieLength; ++i) {
    std::cout << numbers_serie[i];
  }

  return;
}


int main() {
  std::cout << "Este programa lee una secuencia de números enteros e indica cuánto se repite cada número" << std::endl;
  std::cout << "Introduzca la cantidad de números a introducir: ";
  int serie_length = 0;
  std::cin >> serie_length;
  std::vector<int> numbers_serie;
  numbers_serie.reserve(serie_length);
  std::cout << "Introduzca la serie de números: ";
  for (int i = 0; i < serie_length; ++i) {
    std::cin >> numbers_serie[i]; 
  }
  OrderSeries(numbers_serie, serie_length);
  //TimesRepeated(numbers_serie, serie_length);

  return 0;
}