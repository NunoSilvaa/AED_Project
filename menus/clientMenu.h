//
// Created by nmls1 on 14/12/2021.
//

#ifndef AIRPORT_CLIENTMENU_H
#define AIRPORT_CLIENTMENU_H


#include "../src/passenger.h"

class clientMenu{
private:
    Passenger client;

public:
    clientMenu();

    void runClientMenu();

    friend class Passenger;

};


#endif //AIRPORT_CLIENTMENU_H
