#include <iostream>
using namespace std;

int main(){
    /*
    * dynamic memory = Memory that is allocated after the program is already compiled & running
    * Use the 'new' operator allocate memory in the heap rather than the stack
    * 
    * Useful when we don't know how much memory we will need
    * Makes our programs more flexible especially when accepting user input
    */

    int *pNum = nullptr;
    //new returns a address
    pNum = new int;

    *pNum = 21;

    //frees up the memory at the address, good practice when using new operator
    delete pNum;

    //array practice
    char *pGrades = nullptr;
    int size;

    cout << "How many grades to enter in?: ";
    cin >> size;

    pGrades = new char[size];
    for(int i = 0; i<size; i++){
        cout << "Enter grade #" << i + 1 <<": ";
        cin >> pGrades + i;
    }

    for(int i = 0; i <size; i++){
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;
    return 0;
}