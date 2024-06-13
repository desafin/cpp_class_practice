#include "morse.h"

Morse::Morse() {
    // 알파벳 모스 부호 초기화
    alphabet = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
        {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
        {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
        {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
        {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
        {'Z', "--.."}
    };
    
    // 숫자 모스 부호 초기화
    digit = {
        {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"},
        {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."}
    };

    // 특수 문자 모스 부호 초기화
    special = {
        {'/', "-..-."}, {'?', "..--.."}, {'.', ".-.-.-"}, {',' , "--..--"},
        {'+', ".-.-."}, {'=', "-...-"}
    };
}

std::string Morse::textToMorse(const std::string &text) {
    std::ostringstream morseCode;
    for (char c : text) {
        if (isalpha(c)) {
            morseCode << alphabet[toupper(c)] << " ";
        } else if (isdigit(c)) {
            morseCode << digit[c] << " ";
        } else if (special.find(c) != special.end()) {
            morseCode << special[c] << " ";
        } else if (c == ' ') {
            morseCode << "/ ";
        }
    }
    return morseCode.str();
}

std::string Morse::morseToText(const std::string &morse) {
    std::istringstream morseStream(morse);
    std::ostringstream text;
    std::string morseChar;
    
    while (morseStream >> morseChar) {
        if (morseChar == "/") {
            text << " ";
        } else {
            bool found = false;
            for (const auto &pair : alphabet) {
                if (pair.second == morseChar) {
                    text << pair.first;
                    found = true;
                    break;
                }
            }
            if (!found) {
                for (const auto &pair : digit) {
                    if (pair.second == morseChar) {
                        text << pair.first;
                        break;
                    }
                }
            }
            if (!found) {
                for (const auto &pair : special) {
                    if (pair.second == morseChar) {
                        text << pair.first;
                        break;
                    }
                }
            }
        }
    }
    return text.str();
}
