#include <iostream>
using namespace std;

double square(double length);
double cube(double length);

int main(){
    double length = 5.0;
    double area = square(length);
    double vol = cube(length);
    cout << vol << endl;
    cout << area << endl;
    return 0;
}

double square (double length){
    double result = length *length;
    return result;
}

double cube (double length){
    double result = length *length *length;
    return result;
}