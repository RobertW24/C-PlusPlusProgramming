
#include <iostream>
#include <cmath>
#include <vector>

void rotateLeft(std::vector<char>& v, int k);

int main(void) {
    std::vector<char> attend {'1', 'u', '3', '4', 'g', '6', 'r', 'j', 'y', 'j',
        'd', 'd', 'f', 'h', 's', 'd', 'f', '5', 'a', 'd', 'h', '6', 'j', 's', 'd', 'f',
        'j', '1', '2', 'z', 'g', 'd', '7', '3', 'k', 'o', '9', 's', 'j', 'd', 'f'};

    int n_rotations = pow((50 * 2 - 75 / 3 + 20 % 7 + 20 + 12 / 4), 3);

    rotateLeft(attend, n_rotations);

    for(int i = 0; i < 5; i++) {
        std::cout << attend.at(i);
    }

    std::cout << '\n';
    return 0;
}

void rotateLeft(std::vector<char>& v, int k) {
    int new_first = 41 - (k % 41); //12

    std::vector <int> v2;

    int i = 0;
    int j = new_first;
    while (j < 41) { //29
        v2[i] = v[j];
        i++;
        j++;
    }
    
    j = 0;
    while (j < new_first) { //12
        v2[i] = v[j];
        i++;
        j++;
    }
    
    j = 0;
    for (i = 0; i < 41; i++) {
        v[j] = v2[i];
        j++;
    }
}
