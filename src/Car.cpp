#include "Car.h"
#include <iostream>

Car::Car() : Vehicle::Vehicle()
{
    doors = 0;
}

Car::Car(std::string givenManufacturer, int givenYear, int givenDoors) : Vehicle::Vehicle(givenManufacturer, givenYear)
{
    doors = givenDoors;
}

int Car::getDoors()
{
    return doors;
}

void Car::setDoors(int givenDoors)
{
    doors = givenDoors;
}

void Car::displayInfo()
{
    Vehicle::displayInfo();
    std::cout << "Doors: " << doors << std::endl;
}
