//
// Created by nmls1 on 14/12/2021.
//

#include <iostream>
#include "clientMenu.h"
#include "flightsMenu.h"
#include "bookingMenu.h"
#include "reservationMenu.h"


ClientMenu::ClientMenu() {};

void ClientMenu::runClientMenu() {
    FlightsMenu fm;
    ReservationMenu rm;
    Ticket ticket;
    string fname, lname;
    char c;
    cout << "Tell us your first and last name: ";
    cin >> fname;
    cin >> lname;
    while (true){
        client.setFname(fname);
        client.setLname(lname);
        cout << "Hi " << client.getFname() << " " << client.getLname() << ",\n";
        cout << "\nSelect one option:\n";
        cout << "\n   [1] See all fights available"
             << "\n   [2] Check you Reservation"
             << "\n   [0] Exit\n";
        cin >> c;
        switch (c) {
            case'0':
                exit(0);
            case '1':
                fm.runFlightMenu(client);
                break;
            case '2':
                rm.runReservationMenu(client);
                break;
            default: cout << "Invalid Operation\n"; break;
        }
    }
}

