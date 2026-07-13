#include <iostream>
using namespace std;

int main(){
    //first set is num rows and second num cols
    string cars[][3] = {{"Mustang", "Escape", "F-150"},
                        {"Corvette", "Equinox", "Silverado"},
                        {"Challenger", "Durango", "Ram 1500"}};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i< rows; i++){
        for(int j=0; j < cols; j++){
            cout << cars[i][j] << " ";
        }
        cout << '\n';
    }
    cout << sizeof(cars) << endl;
    cout << sizeof(cars[0]) << endl;
    cout << sizeof(cars[0][0]);


    return 0;
}