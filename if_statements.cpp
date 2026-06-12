#include <iostream>
using namespace std;

int main(){
    //be careful or of operations
    
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18){
        cout << "Welcome" << endl;
    }else if (age <=0){
        cout << "You haven't been born yet" << endl;
    } else {
        cout << "You cannot enter the site" << endl;
    }
    return 0;
}