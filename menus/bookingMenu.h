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
    BookingMenu();

    void runBookingMenu(Passenger client, Flight flight);
};


#endif //AIRPORT_BOOKINGMENU_H
