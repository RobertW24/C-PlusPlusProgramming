
#include "MyVector.hpp"

int main(void) {
    MyVector<int> mv;

    for (int i = 0; i < 10; i++) {
        mv.push_back(i);
    }

    mv.print();

    return 0;
}