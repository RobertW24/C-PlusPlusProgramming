
#include <vector>
#include "Car.hpp"

#ifndef CARDEALER_HPP
#define CARDEALER_HPP

class CarDealer {
    
    public:
    void addCar(const Car& car); // Adds the given car to the inventory of the dealer
    void showInventory() const; // Prints all dealer cars
    
    private:
    std::vector<Car> inventory;
    
};

#endif