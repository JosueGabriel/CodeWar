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