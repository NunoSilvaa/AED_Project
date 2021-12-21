//
// Created by croipi on 13/12/21.
//
#include "flight.h"
#include "algorithm"
//#include "../Data/flights.txt"
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

//Plane stuff
Plane::Plane(){}

Plane::Plane(string lp, int cap) {
    this->licensePlate = lp;
    this->capacity = cap;
}
//Getters
string Plane::getLicensePlate() {
    return licensePlate;
}

int Plane::getCapapcity() {
    return capacity;
}
//Setters
void Plane::setLicensePlate(string lp) {
    this -> licensePlate = lp;
}
void Plane::setCapacity(int cap) {
    this -> capacity = cap;
}

void Plane::addPlane(Plane plane) {
    planes.push_back(plane);

    fstream outf("../Data/planes.txt", fstream::app);
    outf << "\n" <<plane.getLicensePlate() << " "
         << plane.getCapapcity();
    outf.close();
}

void Plane::removePlane(Plane plane) {
    for(auto i = planes.begin(); i != planes.end(); i++){
        if(*i == plane) {
            planes.erase(i);
            i--;
        }
    }

    string line;

    ifstream fin;
    fin.open("../Data/planes.txt");
    ofstream temp;
    temp.open("../Data/temp.txt");

    while (getline(fin, line))
    {
        string id(line.begin(), line.begin() + line.find(" "));
        if (id != plane.licensePlate)
            temp << line << endl;
    }

    temp.close();
    fin.close();
    remove("../Data/planes.txt");
    rename("../Data/temp.txt", "../Data/planes.txt");
}

void Plane::readPlanes() {
    ifstream fin("../Data/tickets.txt");
    int cap;
    string lp;

    while (fin >> lp >> cap) {
        Plane plane(lp, cap);
        planes.push_back(plane);
    }
}

/*Plane Plane::findPlane(string lp){
    return *(find(planes.begin(), planes.end(), lp));
}*/

string Plane::generateLicensePlate() {
    static const char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lp /*= "AA-AAA"*/;
    lp.reserve(6);
    srand(time(NULL));

    lp += letters[rand() % 26];
    lp += letters[rand() % 26];
    lp += '-';
    lp += letters[rand() % 26];
    lp += letters[rand() % 26];
    lp += letters[rand() % 26];

    return lp;
}

bool Plane::operator==(const Plane &p) {
    return (p.licensePlate == licensePlate);
}

/*bool Plane::operator()(const Plane& plane, const string &lp) const{
    return (plane.licensePlate == lp);
}*/