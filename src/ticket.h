//
// Created by nmls1 on 05/12/2021.
//

#ifndef AIRPORT_TICKET_H
#define AIRPORT_TICKET_H

#include "passenger.h"
#include <list>

using namespace std;

class Ticket{
private:
    int price;
    int num;
    int seat;
    Passenger* owner;
    list<Ticket> tickets;
public:
    Ticket();
    Ticket(int num, int price, int seat, Passenger* owner);

    int getNum() const;
    int getPrice() const;
    int getSeat() const;
    Passenger* getOwner() const;

    void setNum(int num);
    void setPrice(int price);
    void setSeat(int seat);
    void setOwner(Passenger* owner);

    void addTicket(list<Ticket> tickets, Ticket ticket);
    void removeTicket(list<Ticket> tickets, Ticket ticket);
    Ticket findTicket(list<Ticket> tickets, Ticket ticket);

    //int defineTicketNum()

    bool operator==(const Ticket& t);
};

#endif //AIRPORT_TICKET_H
