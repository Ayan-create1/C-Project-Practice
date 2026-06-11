#include <iostream>

int main() {

    //int data type can only store whole number otherwise truncated --> 7.5 --> 7
    int x; //declaring var
    x = 5;
    int y = 6; 
    int sum = x +y;

    //double includes decimal
    double price = 10.99;

    //char - single character -- MUST use single quotes
    //if you store multiple letters in char, there is overflow error and only the last character is displayed (space is a character)
    char grade = 'a';
    char currency = '$';

    //boolean (true-1 or false-0)
    bool student = false;

    //string
    std::string name = "123Hi";

    std::cout <<"Hello " <<name <<'\n';
    std::cout <<student <<'\n';
    std::cout <<currency <<grade <<'\n';
    std::cout <<price <<'\n';
    std::cout <<x <<'\n' <<sum;
    return 0;
}