#ifndef TRUCK_H
#define TRUCK_H

#include <Vehicle.h>
#include <string>

class Truck : public Vehicle
{
    public:
        Truck();
        Truck(std::string, int, int);
        int getTowingCapacity();
        void setTowingCapacity(int);
        void displayInfo();

    private:
        int towingCapacity;
};

#endif // TRUCK_H
