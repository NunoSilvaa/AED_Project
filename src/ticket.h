//
// Created by nmls1 on 05/12/2021.
//

#ifndef AIRPORT_TICKET_H
#define AIRPORT_TICKET_H

#include "passenger.h"

using namespace std;

class Ticket{
private:
    int price;
    int num;
    int seat;
    Passenger* owner;
public:
    Ticket(int num, int price, int seat);

    int getNum() const;
    int getPrice() const;
    int getSeat() const;
    Passenger* getOwner() const;

    void setNum(int num);
    void setPrice(int price);
    void setSeat(int seat);
    void setOwner(Passenger* owner);
};

#endif //AIRPORT_TICKET_H
