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
    bool checkinBag;
    //Ticket ticket;
public:
    Passenger();
    Passenger(string name, bool checkinBag);

    string getName() const;
    bool getCheckinBag() const;

    void setName(string name);
    void setCheckinBag(bool CheckinBag);
    void displayPassenger();

    friend class clientMenu;
};

#endif //AIRPORT_PASSENGER_H