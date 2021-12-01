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
    cout << endl;
    Vehicle vehicle(manufacturer, year);
    vehicle.displayInfo();

    cout << endl << "Enter car manufacturer: ";
    cin.ignore(100, '\n');
    getline(cin, manufacturer);
    cout << "Enter car year: ";
    cin >> year;
    cout << "Enter number of doors: ";
    int doors;
    cin >> doors;
    cout << endl;
    Car car(manufacturer, year, doors);
    car.displayInfo();

    cout << endl << "Enter truck manufacturer: ";
    cin.ignore(100, '\n');
    getline(cin, manufacturer);
    cout << "Enter truck year: ";
    cin >> year;
    cout << "Enter towing capacity: ";
    int capacity;
    cin >> capacity;
    cout << endl;
    Truck truck(manufacturer, year, capacity);
    truck.displayInfo();
    return 0;
}
