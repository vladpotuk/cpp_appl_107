#include <iostream>
#include "Bus.h"

Bus::Bus(double arrivalTime, int capacity) : arrivalTime(arrivalTime), capacity(capacity), passengerCount(0) {}

double Bus::getArrivalTime() const {
    return arrivalTime;
}

int Bus::getCapacity() const {
    return capacity;
}

bool Bus::hasSpace() const {
    return passengerCount < capacity;
}

void Bus::boardPassenger() {
    if (hasSpace()) {
        passengerCount++;
        std::cout << "Passenger boarded the bus. Total passengers: " << passengerCount << std::endl;
    }
    else {
        std::cout << "Bus is full. Passenger couldn't board." << std::endl;
    }
}

