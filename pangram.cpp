#include "pangram.h"
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <array>

namespace pangram {

bool is_pangram(std::string x){
    bool letter[26] = {false};
    for (char k : x){
        if (k>='a' && k<='z'){
            letter[k-'a']=true;
        }
        if (k>='A' && k<='Z'){
            letter[k-'A']=true;
        }
    }
    for (int i=0; i<26 ; i++){
        if (letter[i]==false) {return false;}
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
}  // namespace pangram
