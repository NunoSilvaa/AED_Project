//
// Created by nmls1 on 05/12/2021.
//

#ifndef AIRPORT_TICKET_H
#define AIRPORT_TICKET_H

#include "passenger.h"
#include "flight.h"
#include "plane.h"
#include <list>

using namespace std;

class Ticket{
private:
    int num;
    string seat;
    Passenger owner;
    Flight flight;
    list<Ticket> tickets;
public:
    /**-----Constructors-----*/
    /**
     * Default constructor for the Ticket class
     */
    Ticket();

    /**
     * Constructor for the Ticket class.
     * @param num represents the ticket number
     */
    Ticket(int num);

    /**
     * Constructor for the Ticket class.
     * @param num represents the ticket number
     * @param seat represents the plane seat of the ticket
     * @param owner represents the object from Passenger who
     * is the owner of the ticket
     * @param flight represents the object from Flight witch is the
     * flight bought
     */
    Ticket(int num, string seat, Passenger owner, Flight flight);

    /**-----Getters-----*/
    /**
     * Getter for the Ticket num
     * @return the Ticket number
     */
    int getNum() const;

    /**
     * Getter for the Ticket seat
     * @return the plane seat on the ticket
     */
    string getSeat() const;

    /**
     * Getter for the Ticket owner
     * @return the the Passenger who owns the ticket
     */
    Passenger getOwner() const;

    /**
     * Getter for the Ticket flight
     * @return the flight that the ticket represents
     */
    Flight getFlight() const;

    /**-----Setters-----*/
    /**
     * Changes the num attribute.
     * @param num the new ticket number
     */
    void setNum(int num);

    /**
     * Changes the seat attribute.
     * @param seat the new seat
     */
    void setSeat(string seat);

    /**
     * Changes the owner attribute;
     * @param owner the new owner
     */
    void setOwner(Passenger owner);

    /**
     * Changes the flight attribute;
     * @param flight the new flight
     */
    void setFlight(Flight flight);

    /**
     * Function to add a ticket to the tickets list
     * @param ticket the ticket added to the list
     */
    void addTicket(Ticket ticket);

    /**
     * Function to remove a ticket of the tickets list
     * @param ticket the ticket removed of the list
     */
    void removeTicket(Ticket ticket);

    /**
     * Function to count the number of tickets of a given flight
     * @param numfly the number of the flight to search for
     */
    int countFlightTickets(int numfly);

    /**
    * Function to generate a random ticket number
    * @return the number of the ticket
    */
    int generateTicketNum();

    /**-----Functions-----*/
    /**
    * Function to generate a seat number
    * @param plane the plane that will do the flight
    * @return the seat number
    */
    string generateSeatNum(Plane plane);

    /**
    * Function to read all the tickets already bought
    * and add them to the list
    */
    void readTickets();

    /**
    * Function to display all the tickets
    * of a given client
    * @param client the client who has bought the tickets
    */
    void display(Passenger client);

};

#endif //AIRPORT_TICKET_H
