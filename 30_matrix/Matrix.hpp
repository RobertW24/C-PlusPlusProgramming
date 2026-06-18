#ifndef MATRIX_HPP
#define MATRIX_HPP

template <typename T>
class Matrix {
public:
    Matrix(int r = 1, int c = 1);

    // TODO destructor, copy contrsuctor, and operators
    ~Matrix();
    Matrix (const Matrix<T>& other);
    Matrix<T>& operator=(const Matrix<T>& other);
    Matrix<T> operator+(const Matrix<T>& other);

    static Matrix<T> load(const char* filename);

    void print() const;



private:
    T** data;
    int rows;
    int cols;




};

#include "Matrix.tpp"

#endif