#include <iostream>
using namespace std;


void sort(int array[], int size);

int main(){
    int numbers[] = {7,1,2,3,4,5,6,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    sort(numbers, size);
    for(int num : numbers){
        cout << num << " ";
    }
    return 0;
}

void sort(int array[], int size){
    //need a temp var
    int temp;

    //size -1 because we are not comparing anything at the end
    for(int i = 0; i < size-1; i++){
        //at end we are not comparing and after each iteration, a number is moved to back so we don't need to check those last nums
        for(int j = 0; j < size - 1 - i; j++){
            //descending: is j < j+1 ex: 1,2 --> switch
            if (array[j] < array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}