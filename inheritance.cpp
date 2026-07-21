#include <iostream>
using namespace std;

/*
class Animal{
    public:
        bool alive = true;
        void eat(){
            cout << "NOM NOM NOM\n";
        }
};

class Dog : public Animal{
    public:
        void bark(){
            cout << "The dog goes woof!\n";
        }
};

class Cat : public Animal{
    public:
    void meow(){
        cout << "The cat goes meow!\n";
    }
};
*/

class Shape{
    public:
        double area;
        double vol;
};

class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->vol = side * side * side;
    }
};

class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->vol = (4/3.0) * 3.14159 * (radius * radius * radius);
    }
};

int main(){

    //inheritance = class can recieve attributes and methods from another class
    // children classes inherit from a parent class
    // helps to reuse similar code found within multiple classes

    Cube cube(10);
    Sphere sphere(5);

    cout << "Area: " << sphere.area << "cm\n";
    cout << "Volume: " << sphere.vol << "cm\n";

    cout << "Area: " << cube.area << "cm\n";
    cout << "Volume: " << cube.vol << "cm\n";


    /*
    Dog dog;
    cout << dog.alive << endl;
    dog.eat();
    dog.bark();

    Cat cat;
    cout << cat.alive << endl;
    cat.eat();
    cat.meow();
    */

    return 0;
}