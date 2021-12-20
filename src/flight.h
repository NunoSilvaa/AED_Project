//
// Created by croipi on 13/12/21.
//

#ifndef UNTITLED3_FLIGHT_H
#define UNTITLED3_FLIGHT_H

#include <string>
#include "plane.h"
#include "../utilities/date.h"
#include "../utilities/time.h"

using namespace std;


class Flight {
private:
    int numfly;
    Date date; //data da partida
    Time duration;
    Plane plane;
    string origin;
    string destination;
    int bprice;
    vector<Flight> flights;
public:
    Flight();
    Flight(int anumfly, Date adate, Time adur, string ori, string dest, int bprice, Plane plane);

    int getNumfly() const;
    Date getDate() const;
    Time getDuration() const;
    string getOrigin() const;
    string getDestination() const;
    int getBprice() const;
    Plane getPlane() const;

    void setNumfly(int anumfly);
    void setDate(Date adate);
    void setDuration(Time adur);
    void setOrigin(string aorigin);
    void setDestination(string adest);
    void setBprice(int bprice);
    void setPlane(Plane plane);

    void addFlight(Flight flight);
    void removeFlight(Flight flight);
    Flight findFlight(int numfly);
    void readFlight();
    void display();
    void displayFiltered();

    bool compareDuration(const Flight& f1, const Flight& f2);
    void sortByDuration();
    bool compareDate(const Flight& f1, const Flight& f2);
    void sortByDate();
    bool compareBprice(const Flight& f1, const Flight& f2);
    void sortByBprice();

    bool operator==(const Flight& f);
};


#endif //UNTITLED3_FLIGHT_H

