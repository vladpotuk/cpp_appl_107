#ifndef BUS_H
#define BUS_H

#include "Passenger.h"

class Bus {
public:
    Bus(double arrivalTime, int capacity);

    double getArrivalTime() const;

    int getCapacity() const;

    bool hasSpace() const;

    void boardPassenger();

private:
    double arrivalTime;
    int capacity;
    int passengerCount;
};

#endif 
