//
// Created by nmls1 on 29/11/2021.
//

#ifndef AIRPORT_PASSENGER_H
#define AIRPORT_PASSENGER_H

#include <string>

using namespace std;

class Passenger {
private:
    string fname;
    string lname;
    bool checkinBag;
    int passportNum;
public:
    /**-----Constructors-----*/
    /**
     * Default constructor for the Passenger class
     */
    Passenger();

    /**
    * Constructor for the Passenger class.
    * @param fname represents the passenger's first name
    * @param lname represents the passenger's last name
    * @param checkinBag represents if the passenger wants to check-in his bag
    * @param passportNum respresents the passenger's passport number
    */
    Passenger(string fname, string lname, bool checkinBag, int passportNum);

    /**-----Getters-----*/
    /**
     * Getter for the Passenger fname
     * @returns the Passenger's  first name
     */
    string getFname() const;

    /**
    * Getter for the Passenger lname
    * @returns the Passenger's last name
    */
    string getLname() const;

    /**
    * Getter for the Passenger checkinBag
    * @returns true if the passenger checked in his bag or false otherwise
    */
    bool getCheckinBag() const;

    /**
    * Getter for the Passenger passportNum
    * @returns the Passenger's passport number
    */
    int getPassportNum() const;

    /**-----Setters-----*/
    /**
     * Changes the fname attribute.
     * @param fname the new passenger's first name
     */
    void setFname(string fname);

    /**
    * Changes the lname attribute.
    * @param lname the new passenger's last name
    */
    void setLname(string lname);

    /**
    * Changes the checkinBag attribute.
    * @param checkinBag the new decision about the bag's checked in
    */
    void setCheckinBag(bool checkinBag);

    /**
    * Changes the passportNum attribute.
    * @param passportNum the passenger's new passport number
    */
    void setPassportNum(int passportNum);

    /**-----Functions-----*/
    /**
    * Function to check if two passengers are equal
    * by comparing their first name, last name and passport number
    * @returns true if they are equal or false otherwise
    */
    bool operator==(const Passenger& p);

};

#endif //AIRPORT_PASSENGER_H