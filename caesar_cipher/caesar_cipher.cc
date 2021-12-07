#include <iostream>
#include <string>

std::string UpperLetters(std::string cipher_message) {
  for (int i = 0; i < cipher_message.length(); ++i) {
    cipher_message[i] = toupper(cipher_message[i]);
  }

  return cipher_message;
}

void Cipher(std::string message, const int rotation_positions ) { // 65 - 90 (Capital)  97 - 122 (Lower)
  std::string cipher_message = "";
  char cipher_letter = 'p';
  int ascii_cipher_letter = 0;
  int ascii_number = 0;
  int real_rotation = 0;
  for (int i = 0; i < message.length(); ++i) {
    if ((message[i] != char(95)) && (message[i] >= char(97)) && (message[i] <= char(122))) {
      real_rotation = rotation_positions % 25;
      ascii_number = static_cast<int>(message[i]);
      ascii_cipher_letter = ascii_number + real_rotation;
      cipher_letter = char(ascii_cipher_letter);
      if (ascii_cipher_letter > char(122)) {
        while (ascii_cipher_letter > char(122)) {
          cipher_letter = char(ascii_cipher_letter - 26);
          ascii_cipher_letter -= 26;
        }
      }
    }
    if (message[i] == char(95)) {
      cipher_letter = char(32);
    }
    if (((message[i] < char(97)) || (message[i] > char(122))) && (message[i] != char(95))) {
      cipher_letter = char(message[i]);
    }
    cipher_message += cipher_letter;
  }
  cipher_message = cipher_message.substr(0, cipher_message.length() - 1);
  std::cout << UpperLetters(cipher_message) << std::endl;

  return;
}




int main() {
  // std::cout << "Este programa cifra un mensaje con el cifrado César" << std::endl;
  for (int i = 0; i < 3; ++i) {
    int rotation_positions = 0;
    std::cin >> rotation_positions;
    std::string message = "";
    std::cin >> message;
    Cipher(message, rotation_positions);
  }

  return 0;
}