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
#include "bossMenu.h"
#include "../src/luggage.h"

using namespace std;


mainMenu::mainMenu() {};

void mainMenu::runMenu() {
    Luggage luggage;
    ClientMenu m;
    BossMenu bm;
    char a;
    while (true) {
        system(CLEAR);
        cout << setw(50) <<"------\n"
             << setw(50) <<"-TAPE-\n"
             << setw(50) <<"------\n";
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
            case '-':
                bm.runBossMenu();
            default: cout << "Invalid Operation\n"; break;
        }
    }
}

