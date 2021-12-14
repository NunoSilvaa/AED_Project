//
// Created by croipi on 13/12/21.
//

#include "flight.h"
#include <string>

using namespace std;

Flight::Flight(int anumfly, int adate, int adur, string origin, string adestination){
    this -> numfly = anumfly;
    this -> date = adate;
    this -> duration = adur;
    this -> origin = origin;
    this -> destination = adestination;
}

//Getters
int Flight::getNumfly() {
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
