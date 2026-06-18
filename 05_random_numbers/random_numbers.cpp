
#include <iostream>
#include <random>

int main(void) {
    // Generate seed
    std::random_device rd;

    // Create random number engine and initialize it with a seed
    std::mt19937 eng(rd());

    // Define a distribution
    std::uniform_int_distribution<int> dist(1, 100);

    for (int i = 0; i < 20; i++) {
        int x = dist(eng);
        std::cout << x << std::endl;
    }



    return 0;
}