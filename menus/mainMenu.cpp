//
// Created by nmls1 on 14/12/2021.
//

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include "mainMenu.h"
#include "clientMenu.h"
#include "../src/plane.h"

using namespace std;


mainMenu::mainMenu() {};

void mainMenu::runMenu() {
    //Flight flight;
    ClientMenu m;
    char a;
    //time_t timer;
    //flight.readFlight();
    while (true) {
        system(CLEAR);
        cout << setw(40) <<"-------------\n"
             << setw(40) <<"-Our Company-\n"
             << setw(40) <<"-------------\n";
       // cout << time(&timer);
        cout << "\n   [1] Staff"
             << "\n   [2] Client"
             << "\n   [0] Exit\n";
        cin >> a;
        switch (a) {
            case '0':
                exit(0);
            case '1':
                cout<<"Staff Area";
                break;
            case '2':
                cout << "Client Area\n";
                m.runClientMenu();
                break;
            default: cout << "Invalid Operation\n"; break;
            //int a = getchar();
        }
    }
}

