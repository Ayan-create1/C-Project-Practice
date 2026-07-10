#include <iostream>
using namespace std;
//int myNum = 3 --> is global when put outside all functions. Global vars are less secure and limit the namespace

int main(){
    //local var - declared inside a function or block of code
    //global var - declared outside of all functions

    int myNum = 1;
    //to use global var --> cout << ::myNum;
    cout << myNum;
    return 0;
}

/*
*Won't work because my num is local to main funct
void printNum(){
    cout << myNum;
}
*/