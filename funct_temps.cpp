#include <iostream>
using namespace std;
template <typename T>

//will return any data type
T myMax(T x, T y){
    return (x > y) ? x : y;
}

int main(){
    //function template = describes what a function looks like
    // can generate as many overloaded functs as needed each using diff data types

    cout << myMax(1.1,2.2) << '\n';
    return 0;
}