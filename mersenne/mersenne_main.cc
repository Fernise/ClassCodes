/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101506371@ull.edu.es
 * @date 8.nov.2020
 * @brief This program takes from the command line a number (n) and shows the first (n) primes numbers of Mersenne.  
 *
 */

#include <iostream>
#include <vector>
#include <cmath>
#include "calculate_mersenne.h"

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char *argv[]) { 
  Usage(argc, argv);
  int parameter2 = std::stoi(argv[1]);
  Mersenne(parameter2);

  return 0;
}