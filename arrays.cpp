#include <iostream>
using namespace std;

int main(){
    //important syntax for declaring an array
    //Ex of setting an array
    //string cars[] = {"Corvette", "Mustang", "Camry"};


    //the three is how big/size of the array 
    string cars[3];

    //changing the value of index 0
    cars[0] = "Camaro";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    cout << cars[0];
    cout << cars[1];
    cout << cars[2];
    return 0;
}