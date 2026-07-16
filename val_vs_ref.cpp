#include <iostream>
using namespace std;

void swap(string &x, string &y);

int main(){
    string x = "Kool-Aid";
    string y = "Water";
    
    swap(x,y);

    cout << x << " " << y;
    return 0;
}

//without the reference (&), the values of x and y in main won't get switched
//these are two copies of the variables x and y, they ARE NOT the same variable but look alikes
void swap(string &x, string &y){
    string temp;
    temp = x;
    x=y;
    y=temp;
}