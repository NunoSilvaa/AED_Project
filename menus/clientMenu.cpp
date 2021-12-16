//
// Created by nmls1 on 14/12/2021.
//

#include <iostream>
#include "clientMenu.h"
#include "flightsMenu.h"


clientMenu::clientMenu() {};

void clientMenu::runClientMenu() {
    flightsMenu fm;
    string name;
    char c;
    cout << "Tell us your name: ";
    cin >> name;
    while (true){
        //system("cls");
        client.setName(name);
        //cout << client.getName();
        cout << "Hi " << client.getName() << "\n";
        cout << "\nSelect one option\n";
        cout << "\n   [1] See all fights available"
             << "\n   [2] Book a flight"
             << "\n   [3] Check you Reservation"
             << "\n   [0] Exit\n";
        cin >> c;
        switch (c) {
            case'0':
                exit(0);
            case '1':
                fm.runFlightMenu();
                break;
            case '2':
                cout << "Book";
                break;
            case '3':
                cout << "Ticket";
                break;
            default: cout << "Invalid Operation\n"; break;
        }
    }
}

