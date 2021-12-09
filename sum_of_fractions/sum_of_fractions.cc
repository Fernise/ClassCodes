/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101506371@ull.edu.es
 * @date 8.nov.2020
 * @brief This program reads triples of three natural numbers and for each one computes and 
 * prints the result of: (1 / a) + (1 / a + k) +(1 / a + 2 * k)
 *
 */

#include <iostream>

/*
 * @brief Computes and prints the result of: (1 / a) + (1 / a + k) +(1 / a + 2 * k)
 * @param const double: first number 
 * @param const double: second number
 * @param const double: third number
 * @return The result of the formula
 */
void CalculateSumOfFractions(const double kPrimerNumero, const double kSegundoNumero, const double kTercerNumero) {
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