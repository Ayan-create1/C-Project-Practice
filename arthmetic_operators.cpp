#include <iostream>
using namespace std;

//decimals are truncated
//PEMDAS is followed

int main(){
    int students = 20;
    //addition
    students = students + 1;
    students += 1;
    students++;
    

    //subraction
    students = students - 1;
    students -= 1;
    students--;

    //multiplication
    students = students * 2;
    students *= 2;

    //division
    students = students / 2;
    students/=2;

    int remainder = students % 2;

    cout<< students;
    return 0;
}