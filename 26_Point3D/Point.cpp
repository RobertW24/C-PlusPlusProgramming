
#include "Point.hpp"
#include <cstring>
#include <iostream>

Point::Point(int x, int y, const char* new_tag) {
    this->x = x;
    this->y = y;

    if (new_tag) { // if new_tag is not nullptr
        int size = strlen(new_tag);
        tag = new char[size + 1]; // + 1 to keep nullptr
        strcpy(tag, new_tag);
    }
    else {
        tag = nullptr;
    }
}

Point::~Point() {
    if (tag) {
        delete [] tag;
    }
}

Point::Point(const Point& other) {
    x = other.x;
    y = other.y;
    if (other.tag) {
        int size = strlen(other.tag);
        tag = new char[size + 1];
        strcpy(tag, other.tag);
    }
    else {
        tag = nullptr;
    }
}


bool Point::operator==(const Point& other) const {
    return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

int& Point::operator[](int index) {
    return (index == 0) ? x : y;
}

std::string Point::toString() const {
    std::string s;
    if (tag) {
        s += std::string(tag);
    }

    return s + ": (" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

Point Point::operator+(const Point& other) const {
    return Point(x + other.x, y + other.y);
}

// TODO
Point Point::operator*(const Point& other) const {
    return Point(x * other.x, y * other.y);
}

// TODO
Point Point::operator-(const Point& other) const {
    return Point(x - other.x, y - other.y);
}

Point& Point::operator+=(const Point& other) {
    // Point temp(x, y);
    // Point(*this);

    *this = *this + other;
    return *this;
}

Point Point::operator++() {
    x += 1;
    y += 1;
    return *this;
}

Point Point::operator++(int) {
    Point temp(*this);
    x += 1;
    x += 1;
    return temp;
    // return Point(x++, y++);
}

Point& Point::operator=(const Point& other) {
// similar to copy constructor code
    x = other.x;
    y = other.y;

    // Deallocate old memory
    if (tag) {
        delete [] tag;
    }

    if (other.tag) {
        int size = strlen(other.tag);
        tag = new char[size + 1];
        strcpy(tag, other.tag);
    }
    else {
        tag = nullptr;
    }

    return *this;
}

std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << p.toString();
    return out;
}

std::istream& operator>>(std::istream& in, Point& p) {
    std::cout << "Enter x, y, tag ";
    in >> p.x;
    in >> p.y;

    return in;
    // TODO get the tag
}

