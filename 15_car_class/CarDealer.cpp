
#include "CarDealer.hpp"
#include <iostream>

void CarDealer::addCar(const Car& car) {
    inventory.push_back(car);
}

void CarDealer::showInventory() const {
    std::cout << "Dealer inventory..." << std::endl;
    for (int i = 0; i < inventory.size(); i++) {
        inventory[i].print_info();
    }
}