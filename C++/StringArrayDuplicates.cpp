/*
    String array duplicates

    In this Kata, you will be given an array of strings and your task is to remove all consecutive duplicate letters from each string in the array.
    For example:

    dup(["abracadabra","allottee","assessee"]) = ["abracadabra","alote","asese"].
    dup(["kelless","keenness"]) = ["keles","kenes"].

    Strings will be lowercase only, no spaces. See test cases for more examples.
    Good luck!

    If you like this Kata, please try:
    Alternate capitalization
    Vowel consonant lexicon
*/
#include <vector>
#include <string>

std::vector<std::string> dup(std::vector<std::string> arr){    
  for (auto &str : arr) {
        for (int var = 0; var <= str.size() -1;) {
            if(str[var] == str[var+1])
                str.erase(var,1);
            else
                var++;
        }
    }
    return  arr;
}