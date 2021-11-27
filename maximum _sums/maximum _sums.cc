#include <iostream>
#include <vector>

void MaximumAdds(std::vector<int>& numbers_serie, const int kSerieLength) {
  int whole_add = 0;
  int possible_max_add_start = 0;
  int possible_max_add_end = 0;
  int max_add_start = 0;
  int max_add_end = 0;
  bool flag_start = false;
  bool flag_end = false;
  for (int i = 0; i < kSerieLength; ++i) {
    whole_add += numbers_serie[i];
  }    
  for (int j = 0; j < kSerieLength; ++j) { 
    possible_max_add_start += numbers_serie[j];
    if ((whole_add < possible_max_add_start) && (max_add_start < possible_max_add_start)) {
      max_add_start = possible_max_add_start; 
      flag_start = true;
    }
    if (flag_start == false) {
      max_add_start = whole_add;
    }
  }
  std::cout << max_add_start << " ";
  for (int j = kSerieLength; j >= 0; --j) {
    possible_max_add_end += numbers_serie[j];
    if ((whole_add < possible_max_add_end) && (max_add_end < possible_max_add_end)) {
      max_add_end = possible_max_add_end;
      flag_end = true;
    }
    if (flag_end == false) { 
      max_add_end = whole_add;
    }
  }
  std::cout << max_add_end << std::endl;

  return;
}


int main() {
  // std::cout << "Este programa lee una secuencia de números e imprime por pantalla la máxima cantidad obtenida de la suma desde la posicion 0 y desde la última posición" << std::endl;
  // std::cout << "Introduzca la longitud de la serie de números: ";
  int serie_length = 0;
  std::cin >> serie_length;
  // std::cout << "Introduzca la serie de números: ";
  std::vector<int> numbers_serie;
  numbers_serie.reserve(serie_length);
  for (int i = 0; i < serie_length; ++i) {
    std::cin >> numbers_serie[i];
  }
  MaximumAdds(numbers_serie, serie_length);

  return 0;
}