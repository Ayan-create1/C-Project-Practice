#include <iostream>
using namespace std;

double getTotal(double prices[], int size);

int main(){
    double prices[] = {89.99, 9.66, 75, 15.05};
    int size = sizeof(prices)/sizeof(prices[1]);
    double total = getTotal(prices, size);

    cout << "$" << total;
    return 0;
}

//cannot use sizeof here in the loop because array decays to a pointer
double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    return total;
}