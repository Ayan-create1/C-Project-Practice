#include <iostream>
//allows us to set a precision
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 123; 
    int choice = 0;
    do{
        cout << "*******************" << endl;
        cout << "Enter your choice:" << endl;
        cout << "*******************" << endl;
        cout << "1. Show balance" <<endl;
        cout << "2. Deposit money" << endl;
        cout << "3. Withdraw money" << endl;
        cout << "4. Exit" << endl;
        cout << "Choice: ";

        cin >> choice; 
        //resets cin state --> basically says forget that the last read failed
        cin.clear();
        //empties the input buffer
        fflush(stdin);

        switch(choice){
            case 1: 
                showBalance(balance);
                break;
            case 2: 
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                cout << "Bye";
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }while(choice != 4);
    
    return 0;
}

void showBalance(double balance){
    //displays 2 decimal places
    cout << "The balance is $" << setprecision(2) << fixed <<balance << endl;
}
double deposit(){
    double amount = 0;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    if(amount > 0){
        return amount;
    } else {
        cout << "Invalid amount" << endl;
        return 0; 
    }
}
double withdraw(double balance){
    double amount = 0;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if(amount > 0 && amount <= balance){
        return amount;
    } else {
        cout << "Invalid amount" << endl;
        return 0; 
    }
    return 0;
}