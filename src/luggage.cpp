//
// Created by nmls1 on 05/12/2021.
//

#include <fstream>
#include <iostream>
#include "luggage.h"
#include "algorithm"

using namespace std;

Luggage::Luggage() {}
Luggage::Luggage(string fName, string lName, string lp) {
    this->fName = fName;
    this->lName = lName;
    this->lp = lp;
}

string Luggage::getFname() const {
    return fName;
}

string Luggage::getLname() const {
    return lName;
}

string Luggage::getLp() const {
    return lp;
}

void Luggage::setFname(string fName) {
    this->fName = fName;
}

void Luggage::setLname(string lName) {
    this->lName = lName;
}

void Luggage::setLp(string lp) {
    this->lp = lp;
}

void Luggage::readLuggage() {
    ifstream fin("../Data/luggages.txt");
    string fName, lName, lp;
    Passenger client;
    Plane plane;

    while(fin >> fName >> lName >> lp){
        Luggage luggage1(fName, lName, lp);
        treadmill.push_back(luggage1);
    }
}

void Luggage::addToTreadmill(Luggage luggage, int ticketsBought) {
    treadmill.push_back(luggage);

    fstream outf("../Data/luggages.txt", fstream::app);
    for(int i = 0; i < ticketsBought; i++) {
        outf << "\n" << luggage.fName << " "
             << luggage.lName << " "
             << luggage.lp;
    }
    outf.close();
}

void Luggage::addToCar( string lp) {
    list<Luggage>::iterator it;
    stack<Luggage> pile;
    bool found = false;
    while(true) {
        for (int i = 0; i < 5; i++) {
            it = find_if(treadmill.begin(), treadmill.end(), [&](const Luggage& l){ return l.getLp() == lp;});
            found = it != treadmill.end();
            if(found) {
                pile.push(*it);
                treadmill.erase(it++);
            }
            else
                break;
        }
        luggageCar.push_back(pile);
        pile = stack<Luggage>();
        if(!found) break;
    }
}

int Luggage::numCarsUsed() {
    return luggageCar.size() % 5;
}

