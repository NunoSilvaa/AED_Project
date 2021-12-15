//
// Created by nmls1 on 05/12/2021.
//
#include <string>
#include "passenger.h"

using namespace std;

Passenger::Passenger() {}

Passenger::Passenger(string name, bool checkinBag) {
    this->name = name;
    this->checkinBag = checkinBag;
}

string Passenger::getName() const {
    return name;
}

bool Passenger::getCheckinBag() const{
    return checkinBag;
}

void Passenger::setName(std::string name) {
    this->name = name;
}

void Passenger::setCheckinBag(bool CheckinBag) {
    this->checkinBag = checkinBag;
}

void Passenger::displayPassenger() {

}
