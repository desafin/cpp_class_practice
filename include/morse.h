#ifndef MORSE_H
#define MORSE_H

#include <iostream>
#include <unordered_map>
#include <sstream>

class Morse {
private:
    std::unordered_map<char, std::string> alphabet;
    std::unordered_map<char, std::string> digit;
    std::unordered_map<char, std::string> special;

public:
    Morse();
    std::string textToMorse(const std::string &text);
    std::string morseToText(const std::string &morse);
};

#endif // MORSE_H
