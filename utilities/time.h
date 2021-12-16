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
    Time(int hour, int minute);
    Time();
    int getHour() const;
    void setHour(int hour);
    int getMinute() const;
    void setMinute(int minute);
    void output(ostream &out) const;
};


#endif //AIRPORT_TIME_H
