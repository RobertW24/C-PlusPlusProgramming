#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

class MyVector {

public:
    MyVector(int capacity = 10);

    MyVector(const MyVector& other);

    // Destructor
    ~MyVector();

    void print();
    void push_back(int val);    // add new element at end

    int pop_back();             // removes the last element and returns its value
    
    bool empty() const;

    int getCapacity() const;

    int& at(int index) const;   // could be used as a setter or a getter

    // TODO
    int thirdMax() const;       // Return third distinct max value from the vector
                                // If no thirdMax - return max value
    
private:
    int* elements;      // an array of integers
    int size;           // current number of element in the array
    int capacity;       // max number of elements im the array 
    
    bool full() const;

    void allocateMemory(int memory_size);
};

#endif