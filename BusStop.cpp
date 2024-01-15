#include "BusStop.h"

BusStop::BusStop(double avgPassengerArrival, double avgBusArrival, bool isTerminal)
    : avgPassengerArrival(avgPassengerArrival), avgBusArrival(avgBusArrival), isTerminal(isTerminal) {}

double BusStop::generateRandomTime(double avgTime) {
    return avgTime;
}

void BusStop::simulate() {
    double currentTime = 0.0;

    while (currentTime < 24.0) {  
        double passengerArrivalTime = generateRandomTime(avgPassengerArrival);

        if (isTerminal && passengerArrivalTime == currentTime)
            continue;

        double busArrivalTime = generateRandomTime(avgBusArrival);

        
        Bus bus(busArrivalTime, 10); 

        
        if (passengerArrivalTime == currentTime && bus.hasSpace()) {
            bus.boardPassenger();
        }

        
        currentTime += 0.5; 
    }
}
