
#include <iostream>
#include <string>
#include <cstdlib> // rand

class Route {

// Access specifier
private:
    std::string source;
    std::string destination;
    int length;

    // Private method
    // Imagine we have thing that gives us dist between 2 cities
    void updateLength() {
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 50;
    }

public:

    // Constructors should be public
    // Constructors have no return type (not even void)
    // Constructors have the ame name as class

    // No argument constructor
    //Route() {
    //    length = 0;
    //}

    // No argument constructor (second version)
    Route() : source("-"), destination("-"), length(0) {

    }

    // Constructor with arguments
    Route(const std::string& s, const std::string& d) {
        setSource(s);
        setDestination(d);
    }

    // Method print
    void print() {
        std::cout << source << " -> " << destination;
        std::cout << ": " << length << std::endl;
    }

    // Get funtions (getters, or accessor funtions)
    std::string getSource() {
        return source;
    }
    std::string getDestination() {
        return destination;
    }
    int getLength() {
        return length;
    }

    // Set funtions (setters, or mutator functions)
    void setSource(const std::string& new_source) {
        source = new_source;
        updateLength();
    }
    void setDestination(const std::string& new_destination) {
        source = new_destination;
        updateLength();
    }


};

int main(void) {

    // Set seed
    srand(time(0));

    // Create Route object
    Route spring_trip;
    spring_trip.print();

    // Set the source and destination
    spring_trip.setSource("Lakeland");
    spring_trip.setDestination("Tokyo");
    
    spring_trip.print();
    // Did smn with Route
    // ...
    
    // Change destination
    spring_trip.setDestination("New York");
    spring_trip.print();

    // Second Route object
    Route summer_trip("Lakeland", "Los Angeles");
    summer_trip.print();


    return 0;
}