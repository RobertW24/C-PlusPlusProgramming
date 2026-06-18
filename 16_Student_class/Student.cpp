
#include <iostream>
#include <string>
#include "Student.hpp"



// Initialize the static data member (REQUIRED)
int Student::total_students = 0;
int Student::next_id = 1000;
double Student::goodGPA = 2.0;

Student::Student(const std::string& n, double g) : name(n), gpa(g) {
    total_students++;
    id = "U0000" + std::to_string(next_id);
    next_id += 5;
}

int Student::getTotalStudents() {
    return total_students;
}

// part of todo
void Student::setGraduationRequirment(double newGPA) {
    if (newGPA >= 2.0 && newGPA <= 4.0) {
        gpa = newGPA;
    }
}

void Student::print() const {
    std::cout << '\n';
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
    std::cout << "Can graduate: " << (canGraduate() ? "YES" : "NO") << std::endl; << std::endl;
    std::cout << '\n';
}

double Student::goodGPA;