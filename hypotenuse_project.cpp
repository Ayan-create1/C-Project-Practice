#include <iostream>
using namespace std;

int main(){
    double a;
    double b;
    double c;

    cout << "Enter a number for side A: ";
    cin >> a;

    cout << "Enter a number for side B: ";
    cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));
    cout << "The hypotenuse is: " << c << endl;

    return 0;
}