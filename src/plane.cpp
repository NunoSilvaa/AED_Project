//
// Created by croipi on 13/12/21.
//
#include "flight.h"
//#include "../Data/flights.txt"
#include <string>
#include "fstream"
using namespace std;

//Plane stuff
Plane::Plane(){}
Plane::Plane(string lp, int cap) {
    this -> licensePlate = lp;
    this -> capacity = cap;
}
//Vector do voo
/*void addFlightplan(vector<Flight>& newFlightplan){
    int numf, date, dur;
    string ori, dest;
    Plane plane();
    for(int i=0;i<5;i++){
        //cout?
        Flight newFlight(numf, date, dur, ori, dest, plane);
        newFlightplan.push_back(newFlight);
    }
}*/
//Getters
string Plane::getLicensePlate() {
    return licensePlate;
}
int Plane::getCapapcity() {
    return capacity;
}
string Plane::getType() {
    return type;
}
//Setters
void Plane::setLicensePlate(string lp) {
    this -> licensePlate = lp;
}
void Plane::setCapacity(int cap) {
    this -> capacity = cap;
}

void Plane::addPlane(Plane plane) {
    planes.push_back(plane);

    fstream outf("../Data/planes.txt", fstream::app);
    outf << "\n" <<plane.getLicensePlate() << " "
         << plane.getCapapcity();
    outf.close();
}

void Plane::readPlanes() {
    ifstream fin("../Data/tickets.txt");
    int cap;
    string lp;

    while(fin >> lp >> cap){
        Plane plane(lp, cap);
        planes.push_back(plane);
    }
}

string Plane::generateLicensePlate() {
    string lp = "AA-AAA";

    lp[0] = rand() % 26;
    lp[1] = rand() % 26;
    lp[3] = rand() % 26;
    lp[4] = rand() % 26;
    lp[6] = rand() % 26;

    return lp;
}
void Plane::setType(string atype) {
    this -> type = atype;
}
