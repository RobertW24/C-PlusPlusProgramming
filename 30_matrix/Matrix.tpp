#include "Matrix.hpp"
#include <stdexcept>
#include <iomanip>
#include <iostream>
#include <fstream> // ifstream

template <typename T>
Matrix<T>::Matrix(int r, int c) : rows(r), cols(c) {
    if (rows < 1 || cols < 1) {
        rows = cols = 0;
        throw std::logic_error("Rows and columns should be positive");
    }

    // Create an array of pointers to T
    data = new T*[rows];

    // Create a one dimensional array of T's
    for (int i = 0; i < rows; i++) {
        data[i] = new T[cols];
    }
    // Initialize the matric
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            data[i][j] = T(); // T() - default template value
        }
    }
}

template <typename T>
void Matrix<T>::print() const {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << std::left << std::setw(6) << data[i][j];
        }
        std::cout << '\n';
    }
}

template <typename T>
Matrix<T> Matrix<T>::load(const char* filename) {
    std::ifstream in(filename);
    if (!in) {
        throw std::invalid_argument(std::string("Cannot open the file ") + filename);
    }

    int r, c;
    in >> r >> c;
    Matrix m(r, c);

    // Scan the data
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            in >> m.data[i][j];
        }
    }

    // Close ifstream
    in.close();

    return m;
}
