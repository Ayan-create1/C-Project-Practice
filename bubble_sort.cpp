#include <iostream>
using namespace std;

void sort(int array[], int size);

int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    sort(numbers, size);

    for(int element : numbers){
        cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size-1; i++){
        //larger elements are getting pushed to end
        // -1 is because you aren't comparing the last element 
        for (int j = 0; j<size - i - 1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}