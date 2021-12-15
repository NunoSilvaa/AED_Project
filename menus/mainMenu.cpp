//
// Created by nmls1 on 14/12/2021.
//

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include "mainMenu.h"
#include "clientMenu.h"

using namespace std;


mainMenu::mainMenu() {};

void mainMenu::runMenu() {
    clientMenu m;
    char a;
    //time_t timer;
    while (true) {
        system("cls");
        cout << setw(40) <<"-------------\n"
             << setw(40) <<"-Our Company-\n"
             << setw(40) <<"-------------\n";
       // cout << time(&timer);
        cout << "\n   [1] Staff"
             << "\n   [2] Client"
             << "\n   [0] Exit\n";
        cin >> a;
        switch (a) {
            case '1':
                cout<<"Staff Area";
                break;
            case '2':
                cout << "Client Area\n";
                m.runClientMenu();
                break;
            //case '0': //Exit doesnt work??
            default: cout << "Invalid Operation\n"; break;
            //int a = getchar();
        }
    }
}

