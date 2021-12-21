//
// Created by nmls1 on 15/12/2021.
//

#ifndef AIRPORT_FLIGHTSMENU_H
#define AIRPORT_FLIGHTSMENU_H


#include "../src/flight.h"
#include "../src/passenger.h"
#include "../src/plane.h"

class FlightsMenu {
private:
    Flight flight;

public:
    /**-----Constructors-----*/
    /**
     * Default constructor for the FlightsMenu class
     */
    FlightsMenu();

    /**-----Functions-----*/
    /**
     * Function that runs the flights menu given a client
     * @param client the passenger that wants to book a flight
     */
    void runFlightMenu(Passenger client);

};


#endif //AIRPORT_FLIGHTSMENU_H
