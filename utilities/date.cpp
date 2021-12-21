//
// Created by nmls1 on 15/12/2021.
//

#include "date.h"

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::Date() : Date(0, 0, 0)
{

}

int Date::getDay() const
{
    return this->day;
}

void Date::setDay(int day)
{
    this->day = day;
}

int Date::getMonth() const
{
    return this->month;
}

void Date::setMonth(int month)
{
    this->month = month;
}

int Date::getYear() const {
    return this->year;
}

void Date::setYear(int year) {
    this->year = year;
}

void Date::output(ostream &out) const {
    string dayDisplay = std::to_string(this->day);

    string monthDisplay = std::to_string(this->month);

    string yearDisplay = to_string(this->year);

    out << dayDisplay << "/" << monthDisplay << "/" << yearDisplay;
}