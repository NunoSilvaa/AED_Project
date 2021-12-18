//
// Created by nmls1 on 29/11/2021.
//

#ifndef AIRPORT_PASSENGER_H
#define AIRPORT_PASSENGER_H

#include <string>

using namespace std;

class Passenger {
private:
    string fname;
    string lname;
    bool checkinBag;
    int passportNum;
    //Ticket ticket;
public:
    Passenger();
    Passenger(string fname, string lname, bool checkinBag, int passportNum);

    string getFname() const;
    string getLname() const;
    bool getCheckinBag() const;
    int getPassportNum() const;

    void setFname(string fname);
    void setLname(string lname);
    void setCheckinBag(bool checkinBag);
    void setPassportNum(int passportNum);

    bool operator==(const Passenger& p);

    //void displayPassenger();

    //friend class clientMenu;
};

#endif //AIRPORT_PASSENGER_H