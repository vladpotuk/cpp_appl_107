#ifndef BUSSTOP_H
#define BUSSTOP_H

#include "Bus.h"

class BusStop {
public:
    BusStop(double avgPassengerArrival, double avgBusArrival, bool isTerminal);

    void simulate();

private:
    double avgPassengerArrival;
    double avgBusArrival;
    bool isTerminal;

    double generateRandomTime(double avgTime);
};

#endif //BUSSTOP_H

