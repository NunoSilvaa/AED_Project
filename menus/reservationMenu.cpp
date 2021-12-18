//
// Created by nmls1 on 16/12/2021.
//

#include <iostream>
#include "reservationMenu.h"


ReservationMenu::ReservationMenu() {}

void ReservationMenu::runReservationMenu(Passenger client) {
    Ticket ticket;
    //Ticket ticket1 = ticket.findTicket(client);
    ticket.display(client);
    //cout << ticket1.getOwner().getFname();
}