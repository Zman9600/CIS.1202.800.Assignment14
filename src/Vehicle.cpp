#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle()
{
    //ctor
    manufacturer = "Invalid";
    year = 0;
}

Vehicle::Vehicle(std::string givenManufacturer, int givenYear)
{
    //ctor
    manufacturer = givenManufacturer;
    year = givenYear;
}

std::string Vehicle::getManufacturer()
{
    return manufacturer;
}

int Vehicle::getYear()
{
    return year;
}

void Vehicle::setManufacturer(std::string givenManufacturer)
{
    manufacturer = givenManufacturer;
}

void Vehicle::setYear(int givenYear)
{
    year = givenYear;
}

void Vehicle::displayInfo()
{
    std::cout << "Manufacturer: " << manufacturer << std::endl;
    std::cout << "Year: " << year << std::endl;
}
