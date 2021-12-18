//
// Created by nmls1 on 05/12/2021.
//
#include <string>
#include "passenger.h"

using namespace std;

Passenger::Passenger() {}

Passenger::Passenger(string fname, string lname, bool checkinBag, int passportNum) {
    this->fname = fname;
    this->lname = lname;
    this->checkinBag = checkinBag;
    this->passportNum = passportNum;
}

string Passenger::getFname() const {
    return fname;
}

string Passenger::getLname() const {
    return lname;
}

bool Passenger::getCheckinBag() const{
    return checkinBag;
}

int Passenger::getPassportNum() const {
    return passportNum;
}

void Passenger::setFname(string fname) {
    this->fname = fname;
}

void Passenger::setLname(string lname) {
    this->lname = lname;
}

void Passenger::setCheckinBag(bool CheckinBag) {
    this->checkinBag = checkinBag;
}

void Passenger::setPassportNum(int passportNum) {
    this->passportNum = passportNum;
}

bool Passenger::operator==(const Passenger &p) {
    return (p.fname == fname && p.lname == lname && p.passportNum == passportNum);
}
/*void Passenger::displayPassenger() {

}*/
