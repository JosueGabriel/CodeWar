/*
    Reverse Words

    Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.

    Examples
    "This is an example!" ==> "sihT si na !elpmaxe"
    "double  spaces"      ==> "elbuod  secaps"
*/
#include <string>

std::string reverse_words(std::string str)
{
  std::string save, rts;
    for(auto id = str.begin(); id <= str.end();id++){
        if(*id != ' ' && id != str.end()){
            save.push_back(*id);
        }else{
            if(!save.empty()){
                int cont = 0;
                while (cont < (int)(save.size()/2)){
                    auto s = *(save.begin() + cont);
                    *(save.begin()+cont) = *((save.end()-1)-cont);
                    *((save.end()-1)-cont) = s;
                    cont++;
                }

            }
            rts += save;
            save.clear();
            if(id == str.end())
                break;
            rts.push_back(*id);
        }
    }
    return rts;
}