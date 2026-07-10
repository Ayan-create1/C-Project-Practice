#include <iostream>
using namespace std;

//programs invoked top down
void happyBirthday(string name, int age);

int main(){
    //happyBirthday();
    string name = "hello";
    int age = 18;
    happyBirthday(name, age);
    return 0;
}

void happyBirthday(string str, int age){
    cout << "Happy Birthday "  << str << " you are " << age << " years old";
}