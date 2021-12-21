//
// Created by nmls1 on 14/12/2021.
//

#ifndef AIRPORT_CLIENTMENU_H
#define AIRPORT_CLIENTMENU_H


#include "../src/passenger.h"

class ClientMenu{
private:
    Passenger client;

public:
    /**-----Constructors-----*/
    /**
     * Default constructor for the ClientMenu class
     */
    ClientMenu();

    /**-----Functions-----*/
    /**
     * Function that runs the clients menu
     */
    void runClientMenu();

};


#endif //AIRPORT_CLIENTMENU_H
