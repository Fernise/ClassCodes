#include <iostream>
#include <vector>

using namespace std;

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
  int x = 2;
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};  
  // std::cout << "Introduzca una serie de números: ";
  cout << exists(x, v) << endl;
  
  return 0;
}