//
// Created by nmls1 on 05/12/2021.
//

#include "ticket.h"
#include <algorithm>
#include <ctime>
#include <fstream>

using namespace std;

Ticket::Ticket() {}

Ticket::Ticket(int num, string seat, Passenger owner, Flight flight) {
    this->num = num;
    this->seat = seat;
    this->owner = owner;
    this->flight = flight;
}

int Ticket::getNum() const {
    return num;
}

/*int Ticket::getPrice() const {
    return price;
}*/

string Ticket::getSeat() const {
    return seat;
}

Passenger Ticket::getOwner() const {
    return owner;
}

Flight Ticket::getFlight() const {
    return flight;
}

void Ticket::setNum(int num) {
    this->num = num;
}

/*void Ticket::setPrice(int price) {
    this->price = price;
}*/

void Ticket::setSeat(string seat) {
    this->seat = seat;
}

void Ticket::setOwner(Passenger owner) {
    this->owner = owner;
}

void Ticket::setFlight(Flight flight) {
    this->flight = flight;
}


// add, remove and search
void Ticket::addTicket(Ticket ticket) {
    tickets.push_back(ticket);

    fstream outf("../Data/tickets.txt", fstream::app);
    outf << "\n" <<ticket.getNum() << " "
         << ticket.getSeat() << " "
         << ticket.getOwner().getFname() << " "
         << ticket.getOwner().getLname() << " ";
    if(ticket.getOwner().getCheckinBag())
        outf << 1 << " ";
    else
        outf << 0 << " ";
    outf << ticket.getOwner().getPassportNum();
    outf.close();
}

/*void Ticket::removeTicket(Ticket ticket) {
    tickets.remove(ticket);
}*/

/*Ticket Ticket::findTicket(Passenger client) {
    list<Ticket>::iterator it;
    for(auto& i: tickets){
        if(i.owner == owner){
            return i;
        }
    }
}*/
    /*for(it = tickets.begin(); it != tickets.end(); it++){
        if(it->owner.getPassportNum() == client.getPassportNum()){
            return *it;
        }
    }/*
    //add exception later
    //return *it;
}*/
void Ticket::readTickets() {
    ifstream fin("../Data/tickets.txt");
    int num, passportNum;
    string fName, lName, seat;
    bool bagBool;
    Flight flight;

    while(fin >> num >> seat >> fName >> lName >> bagBool >> passportNum){
        Passenger owner(fName, lName, bagBool, passportNum);
        Ticket ticket(num, seat, owner, flight);
        tickets.push_back(ticket);
    }
    //cout << bagBool;
}

int Ticket::countFlightTickets(int numfly) {
    list<Ticket>::iterator it;
    int count = 0;
    for(it = tickets.begin(); it != tickets.end(); it++){
        if(it->flight.getNumfly() == numfly){
            count += 1;
        }
    }
    return count;
}

int Ticket::generateTicketNum() {
    int num;

    num = rand() % 999999 + 000000;

    return num;
}

string Ticket::generateSeatNum(Plane plane) {
    int num;
    char ch;
    string seat;

    num = rand() % (plane.getCapapcity()/6) + 00;
    ch = 'A' + rand() % 6;

    seat = ch + to_string(num);
    return seat;
}

void Ticket::display(Passenger client) {
    if (client.getPassportNum() == NULL){
        int passportNum;
        cout << "Insert your passport number: ";
        cin >> passportNum;
        client.setPassportNum(passportNum);
    }

    for(auto i: tickets) {
        if(i.getOwner() == client){
            cout << "  ____________________________________________________________  \n";
            cout << " |                                                            | \n";
            cout << "|                                                              |\n";
            cout << "|                                                              |\n";
            cout << "|       ";cout << i.owner.getFname() << " " << i.owner.getLname(); cout << "                                             |\n";
            cout << "|                                                              |\n";
            cout << "|                                                              |\n";
            cout << "|                                                              |\n";
            cout << "|                                                              |\n";
            cout << "|                                                              |\n";
            cout << "|                                                              |\n";
            cout << "|                                                              |\n";
            cout << " |                                                            | \n";
            cout << "  ____________________________________________________________  \n";
        }
    }
}

/*bool Ticket::operator==(const Ticket &t) {
    return (t.seat == seat && t.price == price && t.num == num && t.owner == owner);
}*/
