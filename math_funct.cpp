#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double x = 3.5;
    double y = 4;
    double z;

    //max shows greater number between two values
    //z = max(x, y);

    //min of two vars
    //z = min(x,y);

    //USES CMATH HEADER

    //z is 2^3 
    //z = pow(2,3);

    //z = sqrt(9);

    //absolute value function
    //z = abs(-3);

    //round function 3.5 --> 4
    //z = round(x);

    //round UP --> ciel function
    //z = ceil(x);

    //round DOWN --> floor function
    z= floor(x);

    cout <<z << '\n';

    return 0;
}