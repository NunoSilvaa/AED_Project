//
// Created by croipi on 19/12/21.
//

#include "stcp.h"

using namespace std;

Stcp::Stcp(string atype, int adist, Time at) {
    this -> type = atype;
    this -> dist = adist;
    this -> time = at.getHour();
}

string Stcp::getType() {
    return type;
}
int Stcp::getDist() {
    return dist;
}
Time Stcp::getTime() {
    return time;
}

void Stcp::setType(string t) {
    this -> type = t;
}
void Stcp::setDist(int d) {
    this -> dist = d;
}
void Stcp::setTime(Time s) {
    this -> time = s.getHour();
}