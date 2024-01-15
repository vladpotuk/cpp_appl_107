#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger {
public:
    Passenger(double arrivalTime);

    double getArrivalTime() const;

    void boardBus();

private:
    double arrivalTime;
};

#endif 

