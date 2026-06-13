#include <iostream>
using namespace std;


int main(){
    //switches are alternatives to using else if statement. They compare one value against other matching cases

    /* MONTH CASE
    int month;
    cout << "Enter the month (1-12): ";
    cin >> month;

    switch(month){
        case 1:
            cout << "It is January";
            break;
        case 2:
            cout << "It is February";
            break;
        case 3:
            cout << "It is March";
            break;
        case 4:
            cout << "It is April";
            break;
        case 5:
            cout << "It is May";
            break;
        case 6:
            cout << "It is June";
            break;
        case 7:
            cout << "It is July";
            break;
        case 8:
            cout << "It is August";
            break;
        case 9:
            cout << "It is September";
            break;
        case 10:
            cout << "It is October";
            break;
        case 11:
            cout << "It is November";
            break;
        case 12:
            cout << "It is December";
            break;
        default:
            cout << "Please enter in only numbers (1-12)";
    }
    */

    {
        char grade;
        cout << "What letter grade?: ";
        cin >> grade;

        switch(grade){
            case 'A':
                cout << "You did great";
                break;
            case 'B':
                cout << "You did good";
                break;
            case 'C':
                cout << "You did average";
                break;
            case 'D':
                cout << "You did poorly";
                break;
            case 'F':
                cout << "You failed";
                break;
            default:
                cout << "Please enter a letter grade";    
        }
    }
    return 0;
}