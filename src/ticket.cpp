//
// Created by nmls1 on 05/12/2021.
//

#include "ticket.h"

using namespace std;

Ticket::Ticket(int num, int price, int seat) {
    this->num = num;
    this->price = price;
    this->seat = seat;
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
