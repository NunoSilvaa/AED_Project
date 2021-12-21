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
    string fName, lName, lp;
    list<Luggage> treadmill;
    vector<stack<Luggage>> luggageCar;

public:
    /**-----Constructors-----*/
    /**
     * Default constructor for the Luggage class
     */
    Luggage();

    /**
     * Constructor for the Luggage class.
     * @param fName represents the first name of the owner of the luggage
     * @param lName represents the last name of the owner of the luggage
     * @param lp represents the license plate of the plane the will transport the luggage
     */
    Luggage(string fName, string lName, string lp);

    /**-----Getters-----*/
    /**
     * Getter for the Luggage fName
     * @returns the first name of the owner of the luggage
     */
    string getFname() const;

    /**
     * Getter for the Luggage lName
     * @returns the the last name of the owner of the luggage
     */
    string getLname() const;

    /**
     * Getter for the Luggage lp
     * @returns the license plate of the plane the will transport the luggage
     */
    string getLp() const;

    /**-----Setters-----*/
    /**
     * Changes the fName attribute.
     * @param fName the new first name of the owner of the luggage
     */
    void setFname(string fName);

    /**
     * Changes the lName attribute.
     * @param fName the new last name of the owner of the luggage
     */
    void setLname(string lName);

    /**
     * Changes the lp attribute.
     * @param lp the license plate of the plane the will transport the luggage
     */
    void setLp(string lp);

    /**-----Functions-----*/
    /**
     * Function that reads the .txt file containing
     * all the luggage available and loads it to a list
     */
    void readLuggage();

    /**
     * Function adds luggage to the list given
     * the number of tickets bought
     * @param luggage the luggage to tbe added
     * @param ticketsBought the number of ticket that were bought
     */
    void addToTreadmill(Luggage luggage, int ticketsBought);

    /**
     * Function that adds a stack to a list given
     * the license plate of the plane that the bags will be loaded
     * @param lp the license plate of the plane that the bags will be loaded
     */
    void addToCar(string lp);

    /**
     * Function that tell us how
     * many cars will be needed to load the plane
     * @returns number of cars will be needed to load the plane
     */
    int numCarsUsed();
};

#endif //AIRPORT_LUGGAGE_H


