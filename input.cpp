#include <iostream>
using namespace std;
//cout << (insertion operator)
//cin >> (extaction operator)
//get line function helps when a input may have a space
int main(){
    string name;
    int age;

    //if we switch to age and then name, a whitespace will be shown as name because there is a hidden \n embedded
    cout << "What's your full name?: ";
    //cin >> name;

    //ws takes care of any whitespace
    getline(cin >> ws, name);

    cout << "What's your age?: ";
    cin >> age;

    cout << "Hello " << name << '\n';
    cout << "You are " << age << " years old" <<'\n';
    return 0;
}