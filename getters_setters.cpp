#include <iostream>
using namespace std;

class Stove{
    private:
        int temp = 0;
    public:
        Stove(int temp){
            setTemp(temp);
        }
        //getter
        int getTemp(){
            return temp;
        }
        //setter
        void setTemp(int temp){
            if(temp < 0){
                this->temp = 0;
            } else if(temp >= 10){
                this->temp =10;
            } else{
                this->temp = temp;
            }
        }
};

int main(){
    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that make a private attribute READBLE
    // setter = function that make a private attribute WRITEABLE

    Stove stove(4);
    //stove.setTemp(10000);
    //stove.temp = 100000;
    cout << "Temp is: " << stove.getTemp();
    return 0;
}