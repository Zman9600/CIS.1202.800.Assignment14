#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

class Vehicle
{
    public:
        Vehicle();
        Vehicle(std::string, int);
        std::string getManufacturer();
        int getYear();
        void setYear(int);
        void setManufacturer(std::string);
        void displayInfo();

    private:
        std::string manufacturer;
        int year;
};

#endif // VEHICLE_H
