//
// Created by croipi on 13/12/21.
//
#ifndef UNTITLED3_PLANE_H
#define UNTITLED3_PLANE_H

#include <string>
#include <vector>
#include <list>

using namespace std;


class Plane {
private:
    string licensePlate;
    int capacity;
    list<Plane> planes;
public:
    /**-----Constructors-----*/
    /**
     * Default constructor for the Plane class
     */
    Plane();

    /**
    * Constructor for the Plane class.
    * @param lp represents the planes license plate
    * @param cap represents the plane capacity
    */
    Plane(string lp, int cap);

    /**-----Getters-----*/
    /**
     * Getter for the Plane lp
     * @returns the Plane's  license plate
     */
    string getLicensePlate();

    /**
    * Getter for the Plane capacity
    * @returns the plane capacity
    */
    int getCapapcity();

    /**-----Setters-----*/
    /**
     * Changes the lp attribute.
     * @param lp the new license plate of the plane
     */
    void setLicensePlate(string lp);

    /**
    * Changes the cap attribute.
    * @param cap the capacity of a plane
    */
    void setCapacity(int cap);

    /**-----Functions-----*/
    /**
    * Function to add a new plane to the fleet
    * @param plane the plane that will be added
    */
    void addPlane(Plane plane);

    /**
    * Function to remove a plane from the fleet
    * @param plane the plane to be removed
    */
    void removePlane(Plane plane);
    //void readPlanes();

    /**
    * Function to generate a plane's license plate
    * @returns a plane's license plate
    */
    string generateLicensePlate();

    /**
    * Function to check if two planes are equal
    * by comparing their license plates
    * @returns true if they are equal or false otherwise
    */
    bool operator==(const Plane& p);
};
#endif //UNTITLED3_PLANE_H

