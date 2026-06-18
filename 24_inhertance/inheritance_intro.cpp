
#include <iostream>
#include <string>

class Human {
public:
    Human() {
        std::cout << "Human Constructor\n";
    }
    Human (const std::string& n, int a) : name(n), age(a) {}
    
    ~Human() {
        std::cout << "Human Destructor\n";
    }

    void printInfo() const {
        std::cout << "My name is " << name << std::endl;
        std::cout << "I am " << age << " years old" << std::endl;
    }
    
    std::string name;
    int age;
    
    private:
    
    
};

class Student : public Human {
    public:
    Student() {
        std::cout << "Student Constructor\n";
    }
    Student (const std::string& n, int a, double g) : Human(n, a), gpa(g) {}

    ~Student() {
        std::cout << "Student Destructor\n";
    }

    // std::string name;
    // int age;
    double gpa;

private:


};

int main (void) {

    Human adam("Adam", 300000);

    adam.printInfo();
    
    
    
    
    Student plato("Plato", 2454, 4.0);
    
    plato.printInfo();
    




    return 0;
}