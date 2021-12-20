//
// Created by nmls1 on 29/11/2021.
//

#ifndef AIRPORT_LUGGAGE_H
#define AIRPORT_LUGGAGE_H

using namespace std;

#include "passenger.h"
#include "plane.h"
#include <queue>
#include <stack>

class Luggage {
private:
    //Passenger client;
    //Plane plane;
    string fName, lName, lp;
    list<Luggage> treadmill;
    vector<stack<Luggage>> luggageCar;

public:
    Luggage();
    Luggage(string fName, string lName, string lp);

    string getFname() const;
    string getLname() const;
    string getLp() const;

    void setFname(string fName);
    void setLname(string lName);
    void setLp(string lp);

    void readLuggage();
    void addToTreadmill(Luggage luggage);
    void addToCar(string lp);
    int numCarsUsed();
    void print_vect();

    //bool operator==(const string& lp1);
};

#endif //AIRPORT_LUGGAGE_H


