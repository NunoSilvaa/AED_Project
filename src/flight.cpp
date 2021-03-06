//
// Created by croipi on 13/12/21.
//

#include "flight.h"
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include "vector"

using namespace std;

Flight::Flight() {}

Flight::Flight(int numfly){
    this->numfly = numfly;
}

Flight::Flight(int numfly, string origin, string destination) {
    this->numfly = numfly;
    this->origin = origin;
    this->destination = destination;
}
Flight::Flight(int anumfly, Date adate, Time adur, string origin, string adestination, int bprice, Plane plane){
    this -> numfly = anumfly;
    this -> date = adate;
    this -> duration = adur;
    this -> origin = origin;
    this -> destination = adestination;
    this -> bprice = bprice;
    this -> plane = plane;
}
//Getters
int Flight::getNumfly() const{
    return numfly;
}
Date Flight::getDate() const{
    return date;
}
Time Flight::getDuration() const{
    return duration;
}
string Flight::getOrigin() const{
    return origin;
}
string Flight::getDestination() const{
    return destination;
}
int Flight::getBprice() const {
    return bprice;
}
Plane Flight::getPlane() const{
    return plane;
}
//Setters
void Flight::setNumfly(int anumfly) {
    this ->numfly = anumfly;
}
void Flight::setDate(Date adate) {
    this ->date = adate;
}
void Flight::setDuration(Time adur) {
    this ->duration = adur;
}
void Flight::setOrigin(string aorigin) {
    this ->origin = aorigin;
}
void Flight::setDestination(string adest) {
    this ->destination = adest;
}
void Flight::setBprice(int bprice) {
    this ->bprice = bprice;
}
void Flight::setPlane(Plane plane) {
    this ->plane = plane;
}

void Flight::addFlight(Flight flight) {
    flights.push_back(flight);

    fstream outf("../Data/flights.txt", fstream::app);
    outf << "\n" << flight.numfly << " "
         << flight.date.getDay() << "/" << flight.date.getMonth() << "/" << flight.date.getYear() << " "
         << flight.duration.getHour() << ":" << flight.duration.getMinute() << " "
         << flight.origin << " "
         << flight.destination << " "
         << flight.bprice << " "
         << flight.plane.getLicensePlate() << " " << flight.plane.getCapapcity();
    outf.close();
}

void Flight::removeFlight(Flight flight) {
    for(auto i = flights.begin(); i != flights.end(); i++){
        if(i->numfly == flight.numfly) {
            flights.erase(i);
            i--;
        }
    }

    string line;

    ifstream fin;
    fin.open("../Data/flights.txt");
    ofstream temp;
    temp.open("../Data/temp.txt");

    while (getline(fin, line))
    {
        string id(line.begin(), line.begin() + line.find(" "));
        if (id != to_string(flight.numfly))
            temp << line << endl;
    }

    temp.close();
    fin.close();
    remove("../Data/flights.txt");
    rename("../Data/temp.txt", "../Data/flights.txt");
}

void Flight::readFlight() {
    ifstream fin("../Data/flights.txt");
    int year, month, day, hour, min, cap;
    string lp;
    char sep;

    while(fin >> numfly >> day >> sep >> month >> sep >> year >> hour >> sep >> min >> origin >> destination >> bprice >> lp >> cap){
        Date date(day, month, year);
        Time duration(hour, min);
        Plane plane(lp, cap);
        Flight flight(numfly, date, duration, origin, destination, bprice, plane);
        flights.push_back(flight);
    }
}
Flight Flight::findFlight(int numfly) {
    for(auto i: flights){
        if(i.getNumfly() == numfly)
            return i;
    }
}

void Flight::display() {
    cout << "From" << setw(15) << "To" << setw(17)
         << "Duration" << setw(13)
         << "Date" << setw(13)
         << "Price" << setw(18)
         << "Flight Number\n\n";
    for (auto x: flights) {
        cout << setw(5) << x.origin << setw(5) << " -------> "
             << setw(5) << x.destination;
        cout << setw(10);
        x.duration.output(cout);
        cout << setw(10);
        x.date.output(cout);
        cout << setw(10) << x.bprice << "$"
             << setw(12) << x.numfly << "\n";

    }
}

void Flight::displayFiltered() {
    string origin, destination;
    cout << "From: ";
    cin >> origin;
    cout << "To: ";
    cin >> destination;
    cout << "From" << setw(15) << "To" << setw(17)
         << "Duration" << setw(13)
         << "Date" << setw(13)
         << "Price" << setw(18)
         << "Flight Number\n\n";

    for (auto x: flights) {
        if(x.origin == origin && x.destination == destination) {
            cout << x.origin << " -------> "
                 << x.destination << setw(10);
            x.duration.output(cout);
            cout << setw(10);
            x.date.output(cout);
            cout << setw(10) << x.bprice << "$"
                 << setw(12) << x.numfly << "\n";
        }
    }
}

bool Flight::compareDuration(const Flight &f1, const Flight &f2) {
    if (f1.duration.getHour() == f2.duration.getHour()) {
        return (f1.duration.getMinute() < f2.duration.getMinute());
    }
    return (f1.duration.getHour() < f2.duration.getMinute());
}

void Flight::sortByDuration() {
    sort(flights.begin(), flights.end(), [this](Flight& f1, Flight& f2){return compareDuration(f1, f2);});
}

bool Flight::compareDate(const Flight &f1, const Flight &f2) {
    if (f1.date.getYear() == f2.date.getYear() && f1.date.getMonth() == f2.date.getMonth()) {
        return (f1.date.getDay() < f2.date.getDay());
    }
    else if(f1.date.getYear() == f2.date.getYear() && f1.date.getMonth() != f2.date.getMonth()){
        return (f1.date.getMonth() < f2.date.getMonth());
    }
    else
        return (f1.date.getYear() < f2.date.getYear());
}

void Flight::sortByDate() {
    sort(flights.begin(), flights.end(), [this](Flight& f1, Flight& f2){return compareDate(f1, f2);});
}

bool Flight::compareBprice(const Flight &f1, const Flight &f2) {
    return (f1.bprice < f2.bprice);
}

void Flight::sortByBprice() {
    sort(flights.begin(), flights.end(), [this](Flight& f1, Flight& f2){return compareBprice(f1, f2);});
}

bool Flight::operator==(const Flight &f) {
    return (f.numfly == numfly);
}