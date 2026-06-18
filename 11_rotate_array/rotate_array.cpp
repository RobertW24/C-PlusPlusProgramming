
#include <iostream>

void rotate_right(const int src[], int dest[], int size, int k);

int main(void) {
    const int SIZE = 7;
    int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7};
    int new_list[SIZE];
    
    // Rotate list
    rotate_right(list, new_list, SIZE, 1);
    
    //Print the list
    for (int i : list) { // range-based for loop
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    //Print the new list
    for (int i : new_list) { // range-based for loop
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    
    
    return 0;
}

void rotate_right(const int src[], int dest[], int size, int k) {
    int new_first = size - (k % size);

    // Copy from new first til the end
    int i = 0;
    int j = new_first;
    while (j < size) {
        dest[i] = src[j];
        i++;
        j++;
    }
    
    // Copy from beginning till new frist
    j = 0;
    while (j < new_first) {
        dest[i] = src[j];
        i++;
        j++;
    }

}