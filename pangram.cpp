#include "pangram.h"
#include <algorithm>
#include <vector>
#include <string>

namespace pangram {

bool is_pangram(std::string x){
    std::string word=x;
    return sort(word.begin(),word.end())=="abcdefghijklmnopqrstuvwxyz";
}
}  // namespace pangram
