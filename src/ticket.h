//
// Created by nmls1 on 05/12/2021.
//

#ifndef AIRPORT_TICKET_H
#define AIRPORT_TICKET_H

#include "passenger.h"
#include "flight.h"
#include "plane.h"
#include <list>

using namespace std;

class Ticket{
private:
    int price;
    int num;
    string seat;
    Passenger owner;
    Flight flight;
    list<Ticket> tickets;
public:
    Ticket();
    Ticket(int num, string seat, Passenger owner, Flight flight);

    int getNum() const;
    string getSeat() const;
    Passenger getOwner() const;
    Flight getFlight() const;

    void setNum(int num);
    //void setPrice(int price);
    void setSeat(string seat);
    void setOwner(Passenger owner);
    void setFlight(Flight flight);

    void addTicket(Ticket ticket);
    void removeTicket(Ticket ticket);
    Ticket findTicket(Passenger client);
    int countFlightTickets(int numfly);

    int generateTicketNum();
    string generateSeatNum(Plane plane);
    void readTickets();
    void display(Passenger client);

    //bool operator==(const Ticket& t);
};

#endif //AIRPORT_TICKET_H
