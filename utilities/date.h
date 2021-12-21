//
// Created by nmls1 on 15/12/2021.
//

#ifndef AIRPORT_DATE_H
#define AIRPORT_DATE_H

using namespace std;

#include"iostream"

class Date {
private:
    int day;
    int month;
    int year;

public:
    /**
     * constructor for the class Date
     * @param day represents the day
     * @param month represents the month
     * @param year represents the year
     */
    Date(int day, int month, int year);
    /**
     * Default constructor
     */
    Date();
    /**
     * function that returns the day
     * @return the day of date
     */
    int getDay() const;
    /**---Getters-and-Setters----*/
    /**
     * setter for the hour
     * @param hour is the new hour
     */
    void setDay(int day);
    /**
     * getter that returns month
     * @return the month of date
     */
    int getMonth() const;
    /**
     * setter for the month
     * @param month is the new month
    */
void setMonth(int month);
/**
 * getter for the year of the date
 * @return the year of the date
 */
int getYear() const;
/**
 * setter for the year
 * @param year is the new year
 */
void setYear(int year);
/**
 * function to print the date
 * @param out is printed
 */
void output(ostream &out) const;
};


#endif //AIRPORT_DATE_H
