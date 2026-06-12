#include <iostream>
using namespace std;

int main(){
    // &&, ||, !

    int temp;
    bool sunny;

    cout << "Enter the temperature: ";
    cin >> temp;

    if (temp <= 0 || temp >= 30){
        cout << "The temperature is bad!";
    } else {
        cout << "The temperature is good";
    }

    if (!sunny){
        cout<<"It is cloudy outside";
    }else{
        cout<<"It is sunny outside";
    }

    return 0;
}