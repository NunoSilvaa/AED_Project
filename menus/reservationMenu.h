//
// Created by nmls1 on 16/12/2021.
//

#ifndef AIRPORT_RESERVATIONMENU_H
#define AIRPORT_RESERVATIONMENU_H


#include "../src/passenger.h"
#include "../src/ticket.h"

class ReservationMenu {
public:
    /**-----Constructors-----*/
    /**
     * Default constructor for the ReservationMenu class
     */
    ReservationMenu();

    /**-----Functions-----*/
    /**
     * Function that runs the reservations menu given a client
     * @param client the passenger that has a reservation
     */
    void runReservationMenu(Passenger client);

};


#endif //AIRPORT_RESERVATIONMENU_H
