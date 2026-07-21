#include <iostream>
using namespace std;

class Human{
    public:
        string name = "Hi";
        string job = "Firebender";
        int age = 70;

        void eat(){
            cout << "This person is eating\n";
        }
        void drink(){
            cout << "This person is drinking\n";
        }
        void sleep(){
            cout << "This person is sleeping";
        }
};

class Car{
    public:
        string make;
        string model;
        int year;
        string color;

        void accelerate(){
            cout << "Gas pressed!\n";
        }
        void brake(){
            cout << "Brake pressed!\n";
        }
};

int main(){
    //object = A collection of attributes and method
    //  They can have characteristics and can perfom action
    //can be used to mimic real worl item (ex: phone, book)
    //Created from a class which acts as a blue print

    /*
    Human human1;
    human1.name = "Lo";
    human1.job = "CS";
    human1.age = 70;

    return 0;
    */

    Car car1;
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";
    cout << car1.make << '\n';
}