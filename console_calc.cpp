#include <iostream>
using namespace std;

int main(){
    char op;
    double num1;
    double num2;
    double result;

    cout << "--------------CALCULATOR-----------------" << endl;

    cout << "Enter an operation (+ - * /): ";
    cin >> op;

    cout << "Enter number 1: ";
    cin >> num1;

    cout <<"Enter number 2: ";
    cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '/':
            result = num1/num2;
            break;
        default:
            cout << "Invalid operator. Please try again" << endl;
            break;
    }

    cout << result << endl;
    cout << "---------------------------------------" << endl;
    return 0;
}