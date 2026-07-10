#include <iostream>
using namespace std;

//functions share same name but need dif set of params to access one
void bakePizza(){
    cout << "Here is your pizza";
}

void bakePizza(string t1){
    cout << "Here is your " << t1 << " pizza";
}

int main(){
    bakePizza();
    bakePizza("cheese");

    return 0;
}

