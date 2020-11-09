/*
    Convert String to Camel Case

    Complete the method/function so that it converts dash/underscore delimited words into camel casing. The first word within the output should be capitalized only if the original word was capitalized (known as Upper Camel Case, also often referred to as Pascal case).

    Examples
    to_camel_case("the-stealth-warrior") // returns "theStealthWarrior"

    to_camel_case("The_Stealth_Warrior") // returns "TheStealthWarrior"
*/
#include <string>
#include <cctype>

std::string to_camel_case(std::string text) {
  std::string camelCase;
    bool capitalLetter = false;
    for(auto str:text){
        if(str == '_' || str == '-'){
            capitalLetter = true;
            continue;
        }
        if(capitalLetter){
            camelCase.push_back(std::toupper(str));
            capitalLetter = false;
        }else
            camelCase.push_back(str);
    }
    return camelCase;
}