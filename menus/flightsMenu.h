//
// Created by nmls1 on 15/12/2021.
//

#ifndef AIRPORT_FLIGHTSMENU_H
#define AIRPORT_FLIGHTSMENU_H


#include "../src/flight.h"
#include "../src/passenger.h"

class FlightsMenu {
private:
    Flight flight;

public:
    FlightsMenu();

    void runFlightMenu(Passenger client);

};


#endif //AIRPORT_FLIGHTSMENU_H
