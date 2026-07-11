#include <iostream>
using namespace std;

int main(){
    //sizeof() = determmines the size in bytes of:
    // a variable, data type, class, object, etc

    //doubles have 8 bytes
    double gpa = 3;
    cout << sizeof(gpa)<< " bytes\n";

    //string is 24 bytes
    string a = "hello";
    cout << sizeof(a)<< " bytes\n";

    //char is 1 byte
    char c = 'B';
    cout << sizeof(c)<< " bytes\n";

    //bool is 1 byte
    bool std = true;
    cout << sizeof(std)<< " bytes\n";

    //array total depends on how many bytes per each data type
    //ex: this is 5 because char is 1 byte
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    cout << sizeof(grades)<< " bytes\n";
    
    //dividing total array bytes by data type bytes to get size of array
    cout <<sizeof(grades)/sizeof(grades[0]) << " elements\n";

    //with string ex
    string students[] = {"Hello", "Jar", "Hot"};
    cout << sizeof(students)/sizeof(students[0]) << " elements\n";



    return 0;
}