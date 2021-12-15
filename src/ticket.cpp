//
// Created by nmls1 on 05/12/2021.
//

#include "ticket.h"
#include <algorithm>

using namespace std;

Ticket::Ticket(int num, int price, int seat, Passenger* owner) {
    this->num = num;
    this->price = price;
    this->seat = seat;
    this->owner = owner;
}

int Ticket::getNum() const {
    return num;
}

int Ticket::getPrice() const {
    return price;
}

int Ticket::getSeat() const {
    return seat;
}

Passenger* Ticket::getOwner() const {
    return owner;
}

void Ticket::setNum(int num) {
    this->num = num;
}

void Ticket::setPrice(int price) {
    this->price = price;
}

void Ticket::setSeat(int seat) {
    this->seat = seat;
}

void Ticket::setOwner(Passenger* owner) {
    this->owner = owner;
}

// add, remove and search
void Ticket::addTicket(list<Ticket> tickets, Ticket ticket) {
    tickets.push_back(ticket);
}

void Ticket::removeTicket(list<Ticket> tickets, Ticket ticket) {
    tickets.remove(ticket);
}

Ticket Ticket::findTicket(list<Ticket> tickets, Ticket ticket) {
    list<Ticket>::iterator it;
    it = std::find(tickets.begin(), tickets.end(), ticket);
    return *it;
}

bool Ticket::operator==(const Ticket &t) {
    return (t.seat == seat && t.price == price && t.num == num && t.owner == owner);
}