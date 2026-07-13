#include <iostream>
using namespace std;

int main(){
    //fill() = Fills a range of elements with specified value
    // fill(begin, end,value)

    int size = 99;
    string foods[size];

    fill(foods, foods + size/3, "pizza");
    fill(foods +(size/3), foods+ (2 * size/3), "burgers");
    fill(foods+ (2 * size/3), foods +size, "milk");

    for(string food: foods){
        cout << food << endl;
    }

    return 0;
}