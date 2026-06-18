
#include <iostream>
#include <string>

// Create Lecture structure description
typedef struct {
    std::string title;
    int duration;
} Lecture;

// Create function with Lecture as input
void print_lecture(const Lecture& lecture) {
    std::cout << "Title:\t\t" << lecture.title << std::endl;
    std::cout << "Duration:\t\t" << lecture.duration << std::endl;
}

int main (void) {
    // Create Lecture objec
    Lecture oop_lecture;

    // Set the attributes of Lecture object
    oop_lecture.title = "Classes and Objects";
    oop_lecture.duration = 50 * 60;

    print_lecture(oop_lecture);



    return 0;
}