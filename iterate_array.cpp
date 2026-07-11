#include <iostream>
using namespace std;

int main(){
    string students[] = {"Spongebob", "Patrick", "Squidward"};
    int a = sizeof(students)/sizeof(students[0]);
    for(int i = 0; i < a; i++){
        cout << students[i] << endl;
    }
    return 0;
}