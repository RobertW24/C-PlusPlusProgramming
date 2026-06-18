
#include <iostream>
#include <string>
#include <vector>

//Template function prototype
template <typename T>
T smallest(const T& n1, const T& n2, const T& n3);

template <typename T>
void print(const T& value);

void print(bool value);

// findMax
template <typename T>
T findMax(const std::vector<T>& v);

int main(void) {
    int i1 = 1, i2 = -23, i3 = 55;

    // Call the template function
    std::cout << smallest(i1, i2, i3) << std::endl;

    std::cout << smallest(12.3, -4.5, 9.4) << std::endl;

    std::string s1 = "apple", s2 = "banana", s3 = "peanut";
    std::cout << smallest(s1, s2 ,s3) << std::endl;

    // Test print function
    print(123);
    print(1 < 2);

    // TODO test findMax
    


    return 0;
}

template <typename T>
T smallest(const T& n1, const T& n2, const T& n3) {
    if (n1 <= n2 && n1 <= n3) {
        return n1;
    }
    else if (n2 <= n3 ) {
        return n2;
    }
    else {
        return n3;
    }
}

template <typename T>
void print(const T& value) {
    std::cout << "Generic: " << value << std::endl;
}

void print(bool value) {
    std::cout << "Boolean: " << (value ? "true" : "false") << std::endl;

}

template <typename T>
T findMax(const std::vector<T>& v) {
    if (v.empty()) {
        // Throw an exception
        throw std::string("findMax: Empty vector.");
    }
    else {
        T max = v[0];
        for (const T& el : v) {
            if (el > max) {
                max = el;
            }
        }
        return max;
    }
}