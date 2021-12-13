//
// Created by nmls1 on 05/12/2021.
//

#include "ticket.h"

using namespace std;

Ticket::Ticket(int num, int price) {
    this->num = num;
    this->price = price;
}

int Ticket::getNum() const {
    return num;
}

int Ticket::getPrice() const {
    return price;
}

void Ticket::setNum(int num) {
    this->num = num;
}

void Ticket::setPrice(int price) {
    this->price = price;
}


