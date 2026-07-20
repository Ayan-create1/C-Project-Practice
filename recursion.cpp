#include <iostream>
using namespace std;


void walk(int steps);
int factorial(int num);

int main(){
    // recursion = a programming technique where a function invokes itself from within
    //iterativevs recursive

    //advantages = less code and cleaner
    // useful for sorting and searching algorithms

    //disadvantages = uses more memory slower

    //walk(100);

    cout << factorial(10);
}

int factorial(int num){
    if(num > 1){
        return num * factorial(num-1);
    } else {
        return 1;
    }
}
//iterative
/*
void walk(int steps){
    for(int i = 0; i < steps; i++){
        cout << "You took a step!\n";
    }
}
*/



//recursive
void walk(int steps){
    if(steps > 0){
        cout << "You take a step!\n";
        walk(steps-1);
    }
}