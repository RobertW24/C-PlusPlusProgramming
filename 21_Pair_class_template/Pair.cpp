#include <iostream>

// Template class
template <typename T1 = int, typename T2 = double> // default tmeplate parameters
class Pair {
public:
    // Constructor
    Pair(const T1& f, const T2& s) : first(f), second(s) {

    }

    // Getters
    const T1& getFirst() const {
        return first;
    }
    const T2& getSecond() const {
        return second;
    }

    // Setters
    void setFirst(const T1& val) {
        first = val;
    }
    void setSecond(const T2& second) {
        this->second = second; // just to show how "this" works
    }

private:
    T1 first;
    T2 second;

};

// Create a function that takes 2 args of any type
// and returns a Pair of those args
template <typename T1, typename T2>
Pair<T1, T2> createPair(const T1& v1, const T2& v2) {
    return Pair<T1, T2>(v1, v2);
}

int main(void) {
    // Create the Pair object
    Pair<int, double> p1(1, 3.4);

    std::cout << "(" << p1.getFirst() << ", " << p1.getSecond() << ")\n";
    
    Pair<std::string, char> p2 = createPair(std::string ("hello"), '!');
    std::cout << "(" << p2.getFirst() << ", " << p2.getSecond() << ")\n";
    
    auto p3 = createPair('a', 3);
    std::cout << "(" << p3.getFirst() << ", " << p3.getSecond() << ")\n";
    
    Pair p4(5, 3.4); // with default template parameters
    std::cout << "(" << p4.getFirst() << ", " << p4.getSecond() << ")\n";


    return 0;
}