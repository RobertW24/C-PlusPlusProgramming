#include "Matrix.hpp"
#include <iostream>
#include <stdexcept>

int main(void) {
    int r, c;
    std::cout << "Enter rows and columns: ";
    std::cin >> r >> c;

    try {
        Matrix<double>(r, c).print();
    }
    catch (const std::logic_error& ex) {
        std::cout << ex.what() << std::endl;
    }
    
    try {
        Matrix<int> mat = Matrix<int>::load("input.txt");
        mat.print();
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }


    return 0;
}