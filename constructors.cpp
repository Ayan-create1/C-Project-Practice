#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;
        double gpa;

    //think of this as a function
    Student(string x, int age, double gpa){
        //if attribute names diff than param names, we don't need this key word
        name = x;
        this->age = age;
        this->gpa = gpa;

        
    }
};

int main(){
    //constructor = special method that is automatically called when an obj is instantiated
    // useful for assigning values to attributes as arguments
    
    Student student1("Spongebob", 13, 3.2);
    cout << student1.name;
    return 0;
}