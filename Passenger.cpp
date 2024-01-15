#include <iostream>
#include "Passenger.h"

Passenger::Passenger(double arrivalTime) : arrivalTime(arrivalTime) {}

double Passenger::getArrivalTime() const {
    return arrivalTime;
}

void Passenger::boardBus() {
    std::cout << "Passenger boarded the bus." << std::endl;
}
