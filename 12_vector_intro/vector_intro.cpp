
#include <iostream>
#include <vector>

void print(const std::vector <int>& v);

int main(void) {
    // Creaet a vector
    std::vector <int> v; // Empty vector (dynamic array of ints)
    
    // Create and initialize
    std::vector <int> v2 {1, 2, 3, 4, 5, 6};
    print(v2);

    // Provide size and default value
    std::vector <int> v3(5, 10); // 5 elements, each set to 10
    print(v3);

    // Copty from another verctor
    std::vector <int> v4(v2);
    print(v4);

    // Get size (number of elements)
    std::cout << "Size v: " << v.size() << std::endl;
    std::cout << "Size v2: " << v2.size() << std::endl;
    
    // First and last elements
    std::cout << "v2 first: " << v2.front() << std::endl;
    std::cout << "v2 last: " << v2.back() << std::endl;

    // Add the lement to the end
    v2.push_back(7);
    v2.push_back(8);
    print(v2);

    // Remove from the end
    v4.pop_back();
    print(v4);

    // Iterator - object points to a certain location in the vector
    // begin() - point to first element
    // end() - point to the one past the last element

    std::cout << *v2.begin() << std::endl;
    std::cout << *(v2.begin() + 2) << std::endl; // prints 3rd element

    // Insert (location (iterator), value)
    v2.insert(v2.begin() + 1, 1000);
    print(v2);


    
    
    return 0;
}

// just prints whichever vector
void print(const std::vector <int>& v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}