#include <iostream>
#include <vector>

//this is a really long data type so we give the data type a new name or alias like pairlist_t. _t shows it's a typedef
//use "using" keyword in place of typedef

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
using text_t = std::string;

int main(){
    //typedef = reserved keyword used to create additional name (alias) for another data type
    //helps with readibility and reduces typos

    //pairlist_t list;
    text_t firstName = "Hi";
    std::cout << firstName << '\n';

    return 0;
}