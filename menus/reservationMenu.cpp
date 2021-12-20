//
// Created by nmls1 on 16/12/2021.
//

#include "reservationMenu.h"


ReservationMenu::ReservationMenu() {}

void ReservationMenu::runReservationMenu(Passenger client) {
    Ticket ticket;
    ticket.readTickets();
    ticket.display(client);
}