//
// Created by croipi on 19/12/21.
//

#ifndef AIRPORT_STCP_H
#define AIRPORT_STCP_H

#include <string>
#include "../utilities/time.h"

class Stcp {
private:
    string type;
    int dist;
    Time t;

public:
    /**----Constructor---*/
    /**
     * default constructor
     * @param atype represents the type
     * @param adist represents the dist (distance)
     * @param at represents the time
     */
    Stcp(string atype, int adist, Time at);
    /**-----Functions----*/
    /**
     *  function to return the type element
     * @return a type of transportation
     */
    string getType();
    /**
     * function to return the distance
     * @return  the distance from the place of arrival
     */
    int getDist();
    /**
     * function that returns the time
     * @return the time the transportation leaves
     */
    Time getTime();
    /**
     * setter for the type
     * @param t is the new type
     */
    void setType(string t);
    /**
     * setter for the distance
     * @param d is the new distance
     */
    void setDist(int d);
    /**
     * setter for the time
     * @param s is the new time
     */
    void setTime(Time s);

};


#endif //AIRPORT_STCP_H
