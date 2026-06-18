
#include <iostream>
#include "Student.hpp"

int main(void) {
    // Print the total number of students
    std::cout << "Total students " << Student::getTotalStudents() << std::endl;
    Student s1("Anna", 2.9);
    std::cout << "Total students " << Student::getTotalStudents() << std::endl;
    Student s2("Nick", 3.5);
    std::cout << "Total students " << Student::getTotalStudents() << std::endl;

    s1.print();
    s2.print();

    return 0;
}