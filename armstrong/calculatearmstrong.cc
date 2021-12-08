#include <iostream>
#include <string>
#include <cmath>
#include "calculatearmstrong.h"

std::string CalculateArmstrong(std::string possible_armstrong) {
  int add = 0;
  char auxiliar = ' ';
  int digits = 0;
  std::string armstrong_result = " ";
  for (int i = 0; i < possible_armstrong.length(); ++i) {
    if (possible_armstrong[i] != 0) {
      auxiliar = possible_armstrong[i];
      digits = static_cast<int>(auxiliar) - 48;
      add += pow(digits, possible_armstrong.length());
    }
    if (possible_armstrong[i] == 0) {
      add += 0;
    }
  }
  if (possible_armstrong == std::to_string(add)) {
    armstrong_result = possible_armstrong + " is an Armstrong number";
    return armstrong_result;
  }
  else {
    armstrong_result = possible_armstrong + " is not an Armstrong number";
    return armstrong_result;
  }

  return 0;
}
  