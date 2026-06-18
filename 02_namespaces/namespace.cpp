
// Working with namespaces

#include <iostream>

// Create a namespace
namespace first {
    int a;
}
namespace second {
    int a;
}

//using namespace second; // Very tricky so he doesnt recommend using it



int main(void) {
    first::a = 10;
    std::cout << first::a << std::endl;


    return 0;
}