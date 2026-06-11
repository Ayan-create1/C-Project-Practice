#include <iostream>
using namespace std;

int main(){
    //type conversion = conversion of a value of one data type to another
    // implicit = automactic
    // explicit = preced value with new data type (int)

    //converted double 3.14 to integer

    double x = (int) 3.14;
    
    //we convert this character using ASCII table
    char y = 100;

    //explicit cast
    cout << (char) 100 << '\n';

    cout <<x << '\n' <<y << '\n' << "-----" <<'\n';


    //example program mini
    int correct = 8;
    int questions = 10;
    //this gets truncated to 0 because we first divide two integers which results in 0 then multiply it
    //double score = correct/questions * 100;
    double score = correct/(double)questions * 100;

    cout << score << "%";


    return 0;
}