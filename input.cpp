#include <iostream>
using namespace std;
//cout << (insertion operator)
//cin >> (extaction operator)
//get line function helps when a input may have a space
int main(){
    string name;
    int age;

    cout << "What's your full name?: ";
    //cin >> name;
    getline(cin, name);

    cout << "What's your age?: ";
    cin >> age;

    cout << "Hello " << name << '\n';
    cout << "You are " << age << " years old" <<'\n';
    return 0;
}