/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101506371@ull.edu.es
 * @date 8.nov.2020
 * @brief This program calculate an Armstrong number.
 *
 */

#include <iostream>
#include <string>
#include <cmath>
// #include "calculatearmstrong.h"
#include "calculatearmstrong.cc"

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char *argv[]) {
  // std::cout << "Este programa indica si un número es Armstrong o no lo es" << std::endl;
  std::string possible_armstrong = " ";
  possible_armstrong = argv[1];
  std::cout << CalculateArmstrong(possible_armstrong) << std::endl;

  return 0;
}