//
// Created by nmls1 on 05/12/2021.
//

#include "ticket.h"
#include <algorithm>
#include <ctime>
#include <fstream>
#include <iomanip>

using namespace std;

Ticket::Ticket() {}

Ticket::Ticket(int num) {
    this->num = num;
}

Ticket::Ticket(int num, string seat, Passenger owner, Flight flight) {
    this->num = num;
    this->seat = seat;
    this->owner = owner;
    this->flight = flight;
}

int Ticket::getNum() const {
    return num;
}

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

void Ticket::setSeat(string seat) {
    this->seat = seat;
}

void Ticket::setOwner(Passenger owner) {
    this->owner = owner;
}

void Ticket::setFlight(Flight flight) {
    this->flight = flight;
}

void Ticket::addTicket(Ticket ticket) {
    tickets.push_back(ticket);

    fstream outf("../Data/tickets.txt", fstream::app);
    outf << "\n" <<ticket.getNum() << " "
         << ticket.getSeat() << " "
         << ticket.getOwner().getFname() << " "
         << ticket.getOwner().getLname() << " "
         << ticket.getFlight().getNumfly() << " "
         << ticket.getFlight().getOrigin() << " "
         << ticket.getFlight().getDestination() << " ";
    if(ticket.getOwner().getCheckinBag())
        outf << 1 << " ";
    else
        outf << 0 << " ";
    outf << ticket.getOwner().getPassportNum();
    outf.close();
}

void Ticket::removeTicket(Ticket ticket) {
    for(auto i = tickets.begin(); i != tickets.end(); i++){
        if(i->getNum() == ticket.num) {
            tickets.erase(i);
            i--;
        }
    }

    string line;

    ifstream fin;
    fin.open("../Data/tickets.txt");
    ofstream temp;
    temp.open("../Data/temp.txt");

    while (getline(fin, line))
    {
        string id(line.begin(), line.begin() + line.find(" "));
        if (id != to_string(ticket.num))
            temp << line << endl;
    }

    temp.close();
    fin.close();
    remove("../Data/tickets.txt");
    rename("../Data/temp.txt", "../Data/tickets.txt");
}

void Ticket::readTickets() {
    ifstream fin("../Data/tickets.txt");
    int num, passportNum, numfly;
    string fName, lName, seat, origin, destination;
    bool bagBool;

    while(fin >> num >> seat >> fName >> lName >> numfly >> origin >> destination >> bagBool >> passportNum){
        Passenger owner(fName, lName, bagBool, passportNum);
        Flight flight1(numfly, origin, destination);
        Ticket ticket(num, seat, owner, flight1);
        tickets.push_back(ticket);
    }
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

    num = rand() % 999999;

    for(auto i: tickets){
        if(i.getNum() == num)
            return generateTicketNum();
    }
    return num;

}

string Ticket::generateSeatNum(Plane plane) {
    int num;
    char ch;
    string seat;

    num = rand() % (plane.getCapapcity()/6);
    ch = 'A' + rand() % 6;

    seat = to_string(num) + ch;

    for(auto i: tickets){
        if(i.getSeat() == seat)
            return generateSeatNum(plane);
    }

    return seat;
}

void Ticket::display(Passenger client) {
    if (client.getPassportNum() == NULL){
        int passportNum;
        cout << "Insert your passport number: ";
        cin >> passportNum;
        client.setPassportNum(passportNum);
    }
    cout << "\nYour ticket info:\n\n";
    for(auto i: tickets) {
        if(i.getOwner() == client){
            cout << "\nTicket owner: " << i.owner.getFname() << " " << i.owner.getLname() << "\n"
                 << "Ticket number: " << i.num << "\n"
                 << "From: " << i.flight.getOrigin() << " " << "To: " << i.flight.getDestination() << "\n"
                 << "Flight number: " << i.flight.getNumfly() << "\n"
                 << "Seat: " << i.seat << "\n";
        }
    }
}

