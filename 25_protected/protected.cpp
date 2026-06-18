
#include <iostream>
#include <string>

class A {
public:
    std::string msg1 = "Message one!";
    
    
private:
    std::string msg2 = "Message two!";


protected:
    std::string msg3 = "Message three!";


};

class B : public A {
public:
    void method() const {
        std::cout << msg1 << std::endl; // fine
        // std::cout << msg2 << std::endl; // no access
        std::cout << msg3 << std::endl; // fine
    }

};

int main(void) {
    B b;
    b.method();

    std::cout << b.msg1; // fine
    // std::cout << b.msg2; // no access
    // std::cout << b.msg3; // no access
    
    


    return 0;
}
