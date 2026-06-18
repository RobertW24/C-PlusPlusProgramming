#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student {

public:
    // Constructor
    Student(const std::string& n, double g);

    // Getter
    static int getTotalStudents();

    // Setter
    // TODO
    static void setGraduationRequirment(double newGPA);   // Should check that newgpa is between 2.0 and 4.0

    void print() const;

private:
    std::string* name;
    double gpa;

    static int total_students;  // Counts # of students
    
    static int next_id;         // Generates unique ID

    static double goodGPA;      // Define graduation requirement

    std::string id;

};

#endif