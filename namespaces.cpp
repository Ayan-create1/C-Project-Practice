#include <iostream>

namespace first{
    int x = 4;
}

namespace second{
    int x = 1;
}

int main(){
    //namespaces help prevent naming conflicts since each variable needs a unique name
    using namespace first;

    //two colons = scope resolution operator
    std::cout<<x;
    std::cout<< first::x;

    return 0;
}