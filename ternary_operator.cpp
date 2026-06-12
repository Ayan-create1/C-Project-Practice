#include <iostream>
using namespace std;

int main(){
    //ternary operator ?: = replacement to an if/else statement
    //condition ? expression1 : expression2;
    /*
    int grade = 50;
    grade >= 60 ? cout << "You pass!" : cout <<"You fail";
    */
    
    // 1 corresponds to true, zero is false
    /*
    int number = 10;
    number % 2 == 1 ? cout << "ODD" : cout << "EVEN";
    */
    
    bool hungry = true;
    //hungry == true  ? cout << "You are hungry" : cout << "You are full";
    cout << (hungry ? "You are hungry" : " You are full");

    return 0;
}