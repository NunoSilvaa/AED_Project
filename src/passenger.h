//
// Created by nmls1 on 29/11/2021.
//

#ifndef AIRPORT_PASSENGER_H
#define AIRPORT_PASSENGER_H

#include <string>

using namespace std;

class Passenger {
private:
    string name;
    //Ticket ticket;
public:
    Passenger(string name);

    string getName() const;

    void setName(string name);
};

#endif //AIRPORT_PASSENGER_H