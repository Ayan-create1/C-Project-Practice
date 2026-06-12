#include <iostream>
using namespace std;

int main(){
    int initial;
    int final;
    string name;
    int month;
    int hcf;
    double bill;

    //have 0 = low, have 1 = high
    int season = 2;

    cout << "Initial meter reading: ";
    cin >> initial;

    cout << "Final meter reading: ";
    cin >> final;
    cin.ignore(10000, '\n');

    cout << "Customer name: ";
    getline (cin, name);

    cout << "Month number (1=Jan, 2=Feb, etc.): ";
    cin >> month;

    cout << "---" << endl;

    hcf = final - initial;

    if (initial < 0){
        cout << "The initial meter reading must not be negative." << endl;
        return 0;
    }

    if (final < initial){
        cout << "The final meter reading must not be less than the initial reading." <<endl;
        return 0;
    }

    if (name == ""){
        cout << "You must enter a customer name." << endl;
        return 0;
    }

    switch(month){
        case 11:
        case 12:
        case 1:
        case 2:
        case 3:
            season = 0;
            break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            season = 1;
            break;
        default:
            cout << "The month number must be in the range 1 through 12." << endl;
    }
    

    if (season == 0){
        if (hcf > 15){
            bill = (15*5.41) + (hcf-15)*7.77;
        } else {
            bill = hcf*5.41;
        }
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "The bill for " << name << " is $" <<bill <<endl;
    } else if (season == 1){
        if (hcf > 23){
            bill = (23*5.41) + (hcf-23)*9.89;
        } else {
            bill = hcf*5.41;
        }
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "The bill for " << name << " is $" <<bill <<endl;
    }
    
    return 0;
} 