#include <iostream>
using namespace std;

struct Car{
    string model;
    int year;
    string color;
};

void printCar(Car &car);
void paintCar(Car &car, string color);

int main(){
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2022;
    car2.color = "blue";

    cout << &car1 << '\n';
    paintCar(car1, "silver");
    printCar(car1);
    return 0;
}

//pass by value not pass by reference
void printCar(Car &car){
    cout << &car << '\n';
    cout << car.model << endl << car.year << endl << car.color << '\n';
}

void paintCar(Car &car, string color){
    car.color = color;
}