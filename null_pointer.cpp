#include <iostream>
using namespace std;

int main(){
    /*
    * Null value = a special value that means something has no value
    * When a pointer is holding a null val, that pointer is not poining to anything
    * 
    * nullptr = keyword represents a null pointer literal
    * 
    * nullptrs are helpful when determining if an address was successfully assigned to a pointer
    */

    int *pointer = nullptr;
    int x = 123;
    pointer = &x;

    if(pointer == nullptr){
        cout << "null";
    }else{
        cout << "assigned \n" << *pointer;
    }
    return 0;
}