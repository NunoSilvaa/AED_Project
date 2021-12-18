//
// Created by croipi on 13/12/21.
//
#include "flight.h"
//#include "../Data/flights.txt"
#include <string>
using namespace std;
//Flight stuff
/*Flight::Flight() {};
Flight::Flight(int anumfly, int adate, int adur, string origin, string adestination){
    this -> numfly = anumfly;
    this -> date = adate;
    this -> duration = adur;
    this -> origin = origin;
    this -> destination = adestination;
}*/
//Getters
/*int Flight::getNumfly() const{
    return numfly;
}
int Flight::getDate() {
    return date;
}
int Flight::getDuration() {
    return duration;
}
string Flight::getOrigin() {
    return origin;
}
string Flight::getDestination() {
    return destination;
}
//Setters
void Flight::setNumfly(int anumfly) {
    this ->numfly = anumfly;
}
void Flight::setDate(int adate) {
    this ->date = adate;
}
void Flight::setDuration(int adur) {
    this ->duration = adur;
}
void Flight::setOrigin(string aorigin) {
    this ->origin = aorigin;
}
void Flight::setDestination(string adest) {
    this ->destination = adest;
}

void Flight::readFlight() {
    ifstream fin("Flights")
}*/
//Plane stuff
/*Plane::Plane(string m, int cap) {
    this -> matricula = m;
    this -> capacidade = cap;
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
string Plane::getMatricula() {
    return matricula;
}
int Plane::getCap() {
    return capacidade;
}
string Plane::getType() {
    return type;
}
//Setters
void Plane::setMatricula(string m) {
    this -> matricula = m;
}
void Plane::setCap(int cap) {
    this -> capacidade = cap;
}
void Plane::setType(string atype) {
    this -> type = atype;
}
