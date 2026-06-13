#include <iostream>
using namespace std;

int main(){
    //do while loop = do some block of code first, then repeat again if condition is true -> do first, then execute the while block
    int number;

    /*
    *FUNCTIONS AS DO WHILE LOOP
    cout <<"Enter a positive #: ";
    cin >> number;

    while(number <0){
        cout <<"Enter a positive #: ";
        cin >> number;
    }

    cout <<"The number is: " << number;
    */

    do{
        cout <<"Enter a positive #: ";
        cin >> number;
    }while(number < 0);

    return 0;
}