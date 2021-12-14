//
// Created by croipi on 13/12/21.
//

#ifndef UNTITLED3_FLIGHT_H
#define UNTITLED3_FLIGHT_H

#include <string>

using namespace std;

class Flight {
private:
    int numfly;
    int date; //data da partida
    int duration;
    string origin;
    string destination;
public:
    Flight(int anumfly, int adate, int adur, string ori, string dest);

    int getNumfly();
    int getDate();
    int getDuration();
    string getOrigin();
    string getDestination();

    void setNumfly(int anumfly);
    void setDate(int adate);
    void setDuration(int adur);
    void setOrigin(string aorigin);
    void setDestination(string adest);

};


#endif //UNTITLED3_FLIGHT_H
