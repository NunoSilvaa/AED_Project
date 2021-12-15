//
// Created by nmls1 on 14/12/2021.
//

#include <iostream>
#include "clientMenu.h"


clientMenu::clientMenu() {};

void clientMenu::runClientMenu() {
    string name;
    char c;
    while (true){
        //system("cls");
        cout << "Tell us your name: ";
        cin >> name;
        client.setName(name);
        //cout << client.getName();
        cout << "Hi " << client.getName() << "\n";
        cout << "\nSelect one option\n";
        cout << "\n   [1] See all fights available"
             << "\n   [2] Book a flight"
             << "\n   [3] ";
        switch (c) {
            case'1'

        }
    }
}

