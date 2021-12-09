/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101506371@ull.edu.es
 * @date 8.nov.2020
 * @brief This program indicates if a determinated number is in a vector of numbers or not.   
 *
 */

#include <iostream>
#include <vector>

using namespace std;

/*
 * @brief Indicates if a determinated number is in a sequence of number or not.
 * @param int: the number to be looked for
 * @param const vector: the vector to be examined
 * @return true or false, depending on if the number is found or not. 
 */
bool exists(int x, const vector<int>& v) {
  for (int i = 0; i < 9; ++i) {
    if (v[i] == x) {
      return true;
    }
  }

  return false;
}

int main() {
  // std::cout << "Este programa indica si un número introducido se encuentra en un determinado vector" << std::endl;
  // std::cout << "Introduzca el número que desea encontrar: ";
  int x = 0;
  std::cin >> x;
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};  
  // std::cout << "Introduzca una serie de números: ";
  cout << exists(x, v) << endl;
  
  return 0;
}