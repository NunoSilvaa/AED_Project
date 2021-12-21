//
// Created by nmls1 on 15/12/2021.
//

#ifndef AIRPORT_TIME_H
#define AIRPORT_TIME_H

using namespace std;

#include <iostream>

class Time {
private:
    int hour;
    int minute;

public:
    /**---constructor----*/
    /**
     * Constructor of class time
     * @param hour represents the hour
     * @param minute represents the mminute
     */
    Time(int hour, int minute);
    /**
     * Default constructor
     */
    Time();
    /**
     * getter for the hour
     * @return hour of time
     */
    int getHour() const;
    /**
     * setter for the hour
     * @param hour is the new hour
     */
    void setHour(int hour);
    /**
     * getter for the minute
     * @return minute of time
     */
    int getMinute() const;
    /**
     * setter for minute
     * @param minute is the new minute of time
     */
    void setMinute(int minute);
    /**
     * function to print the time
     * @param out is printed
     */
    void output(ostream &out) const;
};


#endif //AIRPORT_TIME_H
