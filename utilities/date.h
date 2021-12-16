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
    Date(int day, int month, int year);
    Date();
    int getDay() const;
    void setDay(int hour);
    int getMonth() const;
    void setMonth(int minute);
    int getYear() const;
    void setYear(int year);
    void output(ostream &out) const;
};


#endif //AIRPORT_DATE_H
