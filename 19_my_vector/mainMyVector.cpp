#include <iostream>
#include "MyVector.hpp"

int main(void) {
    // create MyVecotr object dynamically
    MyVector* mv = new MyVector(15);

    for (int i = 0; i < 25; i++) {
        mv->push_back(i * i);
    }

    mv->at(0) = 10;
    std::cout << "the first element is " << mv->at(0) << std::endl;

    while (!mv->empty()) {
        std::cout << "Capacity: " << mv->getCapacity() << std::endl;
        std::cout << mv->pop_back() << std::endl;
        mv->print();
    }

    delete mv;

    return 0;
}