//
// Created by croipi on 13/12/21.
//
#ifndef UNTITLED3_PLANE_H
#define UNTITLED3_PLANE_H

#include <string>
#include <vector>
#include "flight.h"

using namespace std;
/*class Flight {
private:
    int numfly;
    int date; //data da partida
    int duration;
    string origin;
    string destination;
public:
    Flight();
    Flight(int anumfly, int adate, int adur, string ori, string dest);
    int getNumfly();
    int getDate();
    int getDuration();
    string getOrigin();
    string getDestination();
    void setNumfly(int anumfly);
    void setDate(int adate);
    void setDuration(int adur);
    void setOrigin(string aorigin);
    void setDestination(string adest);
    void readFlight();
};*/
class Plane  /*: public Flight*/ {
private:
    string matricula;
    int capacidade;
    string type;
   // vector <Flight> Flightplan;
public:
    Plane(string m, int cap, string type);
    //void addFlightplan(vector<Flight>& newFlightplan);
    //Getters
    string getMatricula();
    int getCap();
    string getType();
    //Setters
    void setMatricula(string m);
    void setCap(int cap);
    void setType(string atype);
};
#endif //UNTITLED3_PLANE_H

