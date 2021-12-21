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
    Stcp(string atype, int adist, Time at);

    string getType();
    int getDist();
    Time getTime();

    void setType(string t);
    void setDist(int d);
    void setTime(Time s);

};


#endif //AIRPORT_STCP_H
