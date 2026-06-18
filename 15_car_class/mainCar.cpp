
#include "Car.hpp"
#include "CarDealer.hpp"

int main(void) {
    // Create Car object
    Car ferrari_f50;

    ferrari_f50.setMake("Ferrari");
    ferrari_f50.setModel("F50");
    ferrari_f50.setYear(2024);
    ferrari_f50.setMPG(14.2);

    ferrari_f50.print_info();
    
    Car ferrari_spider("Ferrari", "Spider", 2023, 13.8);
    Car ferrari_superGT("Ferrari", "Super GT", 2020, 10.8);
    
    ferrari_spider.print_info();
    ferrari_superGT.print_info();

    // Create a car dealer
    CarDealer lakeland_ferrari;

    // Add cars to the dealer
    lakeland_ferrari.addCar(ferrari_f50);
    lakeland_ferrari.addCar(ferrari_spider);
    lakeland_ferrari.addCar(ferrari_superGT);

    // Show the inventory
    lakeland_ferrari.showInventory();

    return 0;
}