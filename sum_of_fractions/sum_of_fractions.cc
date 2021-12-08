#include <iostream>

void CalculateSumOfFractions(const double kPrimerNumero, double kSegundoNumero, double kTercerNumero) {
  double resultado = 0;
  bool bandera = false;
  std::cout << std::fixed;
  std::cout.precision(4);
  if (kPrimerNumero <= kSegundoNumero) {
    resultado += (1 / kPrimerNumero);
    bandera = true;
  }
  if ((kPrimerNumero + kTercerNumero) <= kSegundoNumero) {
    resultado += (1 / (kPrimerNumero + kTercerNumero)); 
    bandera = true;
  }
  if ((kPrimerNumero + (2 * kTercerNumero)) <= kSegundoNumero) {
    resultado += (1 / (kPrimerNumero + (2 * kTercerNumero))); 
    bandera = true;
  } 
  if (bandera == true) {
    std::cout << resultado << std::endl;
  }
  
  return;
}




int main() {
  // std::cout << "Este programa lee triples de tres números y para cada uno calcula el resultado de (1/a) + (1/a+k) + (1/a+2K)" << std::endl;
  // std::cout << "Introduzca un número natural: ";
  //for (int i = 0; i < 4; ++i) {
  double primer_numero = 0;  
  while (std::cin >> primer_numero) {
    double segundo_numero = 0;
    std::cin >> segundo_numero;
    double tercer_numero = 0;
    std::cin >> tercer_numero;
    CalculateSumOfFractions(primer_numero, segundo_numero, tercer_numero);
  }

  return 0;
}