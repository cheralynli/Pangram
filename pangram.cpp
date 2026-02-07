#include "pangram.h"
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <array>
#include <cctype>

namespace pangram {

bool is_pangram(const std::string& x) {  // Use const reference
    bool letter[26] = {false};
    
    for (char k : x) {
        if (std::isalpha(static_cast<unsigned char>(k))) {
            char lower_k = std::tolower(static_cast<unsigned char>(k));
            if (lower_k >= 'a' && lower_k <= 'z') {
                letter[lower_k - 'a'] = true;
            }
        }
    }
    
    for (int i = 0; i < 26; i++) {
        if (!letter[i]) {
            return false;
        }
    }
    return true;
}

void check_pangram() {    
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    if (is_pangram(sentence)) {
        std::cout << "Pangram" << std::endl;
    } else {
        std::cout << "Not pangram" << std::endl;
    }
}

}  // namespace pangram