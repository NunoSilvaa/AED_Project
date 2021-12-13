//
// Created by nmls1 on 05/12/2021.
//
#include <string>
#include "passenger.h"

using namespace std;

Passenger::Passenger(string name) {
    this->name = name;
}

string Passenger::getName() const {
    return name;
}

void Passenger::setName(std::string name) {
    this->name = name;
}