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
    /**-----Constructors-----*/
    /**
     * Default constructor for the Flight class
     */
    Flight();

    /**
     * Constructor for the Flight class.
     * @param numfly represents the number of the flight
    */
    Flight(int numfly);

    /**
     * Constructor for the Flight class.
     * @param numfly represents the number of the flight
     * @param origin represents the origin of the flight
     * @param destination represents the destination of the flight
     */
    Flight(int numfly, string origin, string destination);

    /**
     * Constructor for the Flight class.
     * @param anumfly represents the number of the flight
     * @param adate represents the date of the flight
     * @param adur represents the duration of the flight
     * @param ori represents the origin of the flight
     * @param dest represents the destination of the flight
     * @param bprice represents the price of the flight
     * @param plane represents the place that will do the flight
     */
    Flight(int anumfly, Date adate, Time adur, string ori, string dest, int bprice, Plane plane);

    /**-----Getters-----*/
    /**
     * Getter for the Flight numFly
     * @returns the number of the flight
     */
    int getNumfly() const;

    /**
    * Getter for the Flight date
    * @returns the date of the flight
    */
    Date getDate() const;

    /**
     * Getter for the Flight duration
     * @returns the duration of the flight
     */
    Time getDuration() const;

    /**
     * Getter for the Flight origin
     * @returns the origin of the flight
     */
    string getOrigin() const;

    /**
     * Getter for the Flight destination
     * @returns the destination of the flight
     */
    string getDestination() const;

    /**
     * Getter for the Flight bprice
     * @returns the price of the flight
     */
    int getBprice() const;

    /**
     * Getter for the Flight plane
     * @returns the plane that will do the flight
     */
    Plane getPlane() const;

    /**-----Setters-----*/
    /**
     * Changes the numfly attribute.
     * @param anumfly the new flight number
     */
    void setNumfly(int anumfly);

    /**
     * Changes the date attribute.
     * @param adate the new flight date
     */
    void setDate(Date adate);

    /**
     * Changes the duration attribute.
     * @param adur the new flight duration
     */
    void setDuration(Time adur);

    /**
     * Changes the origin attribute.
     * @param aorigin the new flight origin
     */
    void setOrigin(string aorigin);

    /**
     * Changes the destination attribute.
     * @param adest the new flight destination
     */
    void setDestination(string adest);

    /**
     * Changes the bprice attribute.
     * @param bprice the new flight price
     */
    void setBprice(int bprice);

    /**
     * Changes the plane attribute.
     * @param plane the new plane that will do the flight
     */
    void setPlane(Plane plane);

    /**-----Functions-----*/
    /**
     * Function to add a new flight
     * @param flight the flight that will be added
     */
    void addFlight(Flight flight);

    /**
     * Function to remove a flight
     * @param flight the flight that will be removed
     */
    void removeFlight(Flight flight);

    /**
     * Function to find a flight given it's number
     * @param numfly the number of the flight to be found
     */
    Flight findFlight(int numfly);

    /**
     * Function to read all the flight inthe .txt file
     * and add them to the list
     */
    void readFlight();

    /**
     * Function to display all flights available
     */
    void display();

    /**
     * Function to display all flights available to a
     * given origin and destination
     */
    void displayFiltered();

    /**
     * Function to compare two flights by their duration
     * @param f1 one flight
     * @param f2 another flight
     * @returns true if f1 has a lower duration than f2 or false otherwise
     */
    bool compareDuration(const Flight& f1, const Flight& f2);

    /**
     * Function to sort all flights available
     * by their duration
     */
    void sortByDuration();

    /**
     * Function to compare two flights by their date
     * @param f1 one flight
     * @param f2 another flight
     * @returns true if f1 is sooner than f2 or false otherwise
     */
    bool compareDate(const Flight& f1, const Flight& f2);

    /**
     * Function to sort all flights available
     * by their date
     */
    void sortByDate();

    /**
     * Function to compare two flights by their price
     * @param f1 one flight
     * @param f2 another flight
     * @returns true if f1 is less expensive than f2 or false otherwise
 */
    bool compareBprice(const Flight& f1, const Flight& f2);

    /**
     * Function to sort all flights available
     * by their price
     */
    void sortByBprice();

    /**
     * Function to check if two flights are equal
     * by comparing their flight number
     * @returns true if they are equal or false otherwise
     */
    bool operator==(const Flight& f);
};


#endif //UNTITLED3_FLIGHT_H

