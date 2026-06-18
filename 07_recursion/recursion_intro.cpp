
#include <iostream>

void countdown(int n);

int main (void) {
    
    countdown(10);
    
    
    return 0;
}

void countdown(int n) {
    if (n < 1) {
        return; // Base case
    }
    std::cout << n << ' ';
    // Call the same function
    countdown(n - 1); // Recursive call
}
