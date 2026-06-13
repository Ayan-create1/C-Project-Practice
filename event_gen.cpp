#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1:
            cout << "sunny";
            break;
        case 2:
            cout << "cold";
            break;
        case 3:
            cout << "rainy";
            break;
        case 4:
            cout << "snowy";
            break;
        case 5:
            cout << "dry";
            break;
    }
    return 0;
}