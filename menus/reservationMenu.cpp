//
// Created by nmls1 on 16/12/2021.
//

#include "reservationMenu.h"


ReservationMenu::ReservationMenu() {}

void ReservationMenu::runReservationMenu(Passenger client) {
    Ticket ticket, ticket1;
    char c;
    int num;
    ticket.readTickets();
    cout << "\n Select one option:\n\n"
         << "[1]     See your reservations\n"
         << "[2]     Cancel a reservation\n"
         << "[3]     Exit\n";
    cin >> c;
    switch (c) {
        case '0':
            exit(0);
        case '1':
            ticket.display(client);
            break;
        case '2':
            cout << "Introduce your ticket number: ";
            cin >> num;
            ticket1 = Ticket(num);
            ticket.removeTicket(ticket1);
            break;
    }
}