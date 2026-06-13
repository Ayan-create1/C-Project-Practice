#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "*******NUMBER GUESSING GAME*******";
    do{
        cout << "Enter a guess btwn (1-100): ";
        cin >> guess;
        tries++;

        if(guess > num){
            cout << "Too large" << endl;
        } else if (guess < num){
            cout << "Too small" <<endl;
        } else {
            cout << "Correct! Tries: " << tries << endl;
        }
    }while(guess != num);

    cout << "**********************************";

    return 0;
}