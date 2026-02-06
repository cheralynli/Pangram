#include "pangram.h"
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

namespace pangram {

    std::string sentence;

    std::cout << "Enter a sentence: ";
    std::getline(std::cin , sentence);

bool is_pangram(std::string x){
    std::string sentence;
    std::transform(x.begin(),x.end(),sentence.begin(),[](unsigned char c){return std::tolower(c);});
    return sentence=="abcdefghijklmnopqrstuvwxyz";
}
}  // namespace pangram
