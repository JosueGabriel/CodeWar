/*
    Build Tower
    Build Tower by the following given argument:
    number of floors (integer and always greater than 0).

    Tower block is represented as *

    Python: return a list;
    JavaScript: returns an Array;
    C#: returns a string[];
    PHP: returns an array;
    C++: returns a vector<string>;
    Haskell: returns a [String];
    Ruby: returns an Array;
    Lua: returns a Table;
    Have fun!

    for example, a tower of 3 floors looks like below

    [
    '  *  ', 
    ' *** ', 
    '*****'
    ]
    and a tower of 6 floors looks like below

    [
    '     *     ', 
    '    ***    ', 
    '   *****   ', 
    '  *******  ', 
    ' ********* ', 
    '***********'
    ]
    Go challenge Build Tower Advanced once you have finished this :)
*/
#include <vector>
#include <string>

class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
        std::vector<std::string> tower(nFloors, std::string((nFloors*2-1),'*'));
        int cont = 1;
        for(auto var = (tower.size() - 1); var > 0; var--){
            for (int i = 1; i <= cont; i++) {
                tower[var - 1].at(0 + i - 1)= ' ';
                tower[var - 1].at((nFloors*2-1) - i) = ' ';
            }
            cont++;
        }
        return tower;
    }
};