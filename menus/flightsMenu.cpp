//
// Created by nmls1 on 15/12/2021.
//

#include <iostream>
#include "flightsMenu.h"


flightsMenu::flightsMenu() {}

void flightsMenu::runFlightMenu() {
    Flight flight;
    char c;
    flight.readFlight();
    flight.display();
    /*cout << "\nDo you want to book a flight?";*/
    cout << "Sort by:\n"
         << "[1]   Duration\n"
         << "[2]   Date\n"
         << "[3]   Price\n";
    cin >> c;
    //system("pause");
    switch (c) {
        case '1':
            flight.sortByDuration();
            flight.display();
            system("pause");
            break;
        case '2':
            flight.sortByDate();
            flight.display();
            system("pause");
            break;
        case '3':
            flight.sortByBprice();
            flight.display();
            system("pause");
            break;
        default: cout << "Invalid Operation\n"; break;
    }
    cout << "Do you want to book a flight? [y/n] ";
    cin >> c;
    switch (c) {
        case 'y':
            cout << "book";
        case 'n':
            exit(0);

    }
}