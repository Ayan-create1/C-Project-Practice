#include <iostream>
using namespace std;

int main(){
    /*
    * pointers = var that stores a memory address of another variable
    * sometimes easier to work with an address
    * & address-of operator
     *deference operator
    */

    string name = "Hello";
    string *pName = &name;

    //gives address
    // cout << pName << endl;
    //access value "name" at address
    // cout << *pName << "\n";

    //pointer with int
    int age = 21;
    int *pAge = &age;

    //cout << *pAge;

    //arrays are already a memory address
    string freePizzas[5] = {"p1", "p2", "p3", "p4", "p5"};
    cout << *freePizzas;
    return 0;
}