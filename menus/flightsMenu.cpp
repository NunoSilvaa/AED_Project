//
// Created by nmls1 on 15/12/2021.
//

#include <iostream>
#include "flightsMenu.h"
#include "bookingMenu.h"


FlightsMenu::FlightsMenu() {}

void FlightsMenu::runFlightMenu(Passenger client) {
    BookingMenu bm;
    Plane plane;
    Flight flight;
    char c;
    int numfly;
    flight.readFlight();
    flight.display();
    /*cout << "\nDo you want to book a flight?";*/
    cout << "\nSort by:\n"
         << "[1]   Duration\n"
         << "[2]   Date\n"
         << "[3]   Price\n";
    cin >> c;
    //system("pause");
    switch (c) {
        case '1':
            flight.sortByDuration();
            flight.display();
            break;
        case '2':
            flight.sortByDate();
            flight.display();
            break;
        case '3':
            flight.sortByBprice();
            flight.display();
            break;
        default: cout << "Invalid Operation\n"; break;
    }
    cout << "\nDo you want to book a flight? [y/n] ";
    cin >> c;
    switch (c) {
        case 'n':
            exit(0);
        case 'y':
            flight.displayFiltered();
            cout << "\nInsert the number of the flight that you want to purchase: ";
            cin >> numfly;
            Flight flight1 = flight.findFlight(numfly);
            bm.runBookingMenu(client, flight1);
            break;
    }
}