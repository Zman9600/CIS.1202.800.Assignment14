#include "Truck.h"
#include <string>
#include <iostream>

Truck::Truck()
{
    //ctor
}

Truck::Truck(std::string givenManufacturer, int givenYear, int givenCapacity) : Vehicle::Vehicle(givenManufacturer, givenYear)
{
    towingCapacity = givenCapacity;
}

int Truck::getTowingCapacity()
{
    return towingCapacity;
}

void Truck::setTowingCapacity(int val)
{
    towingCapacity = val;
}

void Truck::displayInfo()
{
    Vehicle::displayInfo();
    std::cout << "Towing Capacity: " << towingCapacity << std::endl;
}
