
#include <iostream>

void add_five(int& num);

int main(void) {
    int a = 10;
    // Create a reference varible
    int& a_ref = a;          // any change to a_ref will change a as well (and vise versa)
    
    a += 10;
    std::cout << a << " " << a_ref << std::endl;
    
    a_ref *= 10;
    std::cout << a << " " << a_ref << std::endl;

    add_five(a);
    std::cout << a << " " << a_ref << std::endl;
    
    return 0;
}

void add_five(int& num) {
    num += 5;
}

// Extra Note: We try to avoid global variables