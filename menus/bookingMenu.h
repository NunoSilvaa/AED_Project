//
// Created by nmls1 on 16/12/2021.
//

#ifndef AIRPORT_BOOKINGMENU_H
#define AIRPORT_BOOKINGMENU_H


#include "../src/passenger.h"
#include "../src/flight.h"
#include "../src/ticket.h"
#include<ctime>

class BookingMenu {
public:
    /**-----Constructors-----*/
    /**
     * Default constructor for the BookingMenu class
     */
    BookingMenu();

    /**-----Functions-----*/
    /**
     * Function that runs the bookings menu given a client and a flight
     * @param client the passenger that has a reservation
     * @param flight the flight that the client wants to buy
     */
    void runBookingMenu(Passenger client, Flight flight);
};


#endif //AIRPORT_BOOKINGMENU_H
