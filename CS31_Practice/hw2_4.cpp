#include <iostream>
using namespace std;

int main(){
    int month;
    cout << "Give a number (1-12): ";
    cin >> month;

    switch (month){
        case 6:
            cout << "summer solstice";
            break;
        case 12:
            cout << "winter solstice";
            break;
        case 3:
        case 9:
            cout << "equinox";
            break;
        default:
            cout << "nothing special";
    }
    return 0;
}