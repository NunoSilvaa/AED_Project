//
// Created by croipi on 13/12/21.
//
#ifndef UNTITLED3_PLANE_H
#define UNTITLED3_PLANE_H

#include <string>
#include <vector>
#include <list>

using namespace std;


class Plane  /*: public Flight*/ {
private:
    string licensePlate;
    int capacity;
    list<Plane> planes;
    // vector <Flight> Flightplan;
public:
    Plane();
    Plane(string lp, int cap);
    //void addFlightplan(vector<Flight>& newFlightplan);
    //Getters
    string getLicensePlate();
    int getCapapcity();
    //Setters
    void setLicensePlate(string lp);
    void setCapacity(int cap);

    void addPlane(Plane plane);
    void readPlanes();
    string generateLicensePlate();
};
#endif //UNTITLED3_PLANE_H

