#ifndef CAR_H
#define CAR_H

#include <Vehicle.h>
#include <string>

class Car : public Vehicle
{
    public:
        Car();
        Car(std::string, int, int);
        int getDoors();
        void setDoors(int);
        void displayInfo();
    private:
        int doors; //!< Member variable "doors"
};

#endif // CAR_H
