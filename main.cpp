//Zachary Arnould
//CIS 1202 800
//December 1 2021

#include <iostream>
#include "Truck.h"
#include "Car.h"
#include "Vehicle.h"
#include <string>

using namespace std;

int main()
{
    string manufacturer;
    int year;
    cout << "Enter vehicle manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter vehicle year: ";
    cin >> year;
    Vehicle vehicle(manufacturer, year);
    vehicle.displayInfo();
    return 0;
}
