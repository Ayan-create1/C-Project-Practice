#include <iostream>
using namespace std;

int main(){
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    //.length gives LENGTH of a string
    /*
    if(name.length() > 12){
        cout << "Your name can't be over 12 characters";
    } else {
        cout << "Welcome " << name;
    }
    return 0;
    */

    //EMPTY method returns a bool value
    /*
    if(name.empty()){
        cout << "You didn't enter your name";
    }else{
        cout << "Hello"  << name;
    }
    */

    //CLEAR name so basically makes the name empty
    /*
    name.clear();
    cout << "Hello" << name;
    */

    //APPEMD - adds something to the end of the string
    /*
    name.append("@gmail.com");
    cout << name;
    */

    //AT - displays a character at a given position
    //cout << name.at(1);

    //INSERT - can insert a character at a given point
    /*
    name.insert(0, "@");
    cout << name;
    */

    //FIND - position of a character
    //cout << name.find(' ');


    //ERASE - takes away a portion of a string
    name.erase(0,3);
    cout << name;

    return 0;
    
}