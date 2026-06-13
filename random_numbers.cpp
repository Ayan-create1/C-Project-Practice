#include <iostream>
#include <ctime>
using namespace std;

int main(){
    //pseudo-random = NOT truly random (but close)

    //will use a different seed of random numbers
    srand(time(NULL));

    //gives number 1-6 --> remember %6 can result in 0 that's why we add the +1
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout << num1;
    cout << num2;
    cout << num3;
    return 0;
}