//
// Created by nmls1 on 18/12/2021.
//

#include <iostream>
#include "bossMenu.h"
#include "../src/flight.h"
#include "../src/luggage.h"

using namespace std;

BossMenu::BossMenu() {}

void BossMenu::runBossMenu() {
    Flight flight, flight1;
    Plane plane, plane1;
    Luggage luggage;
    Date date;
    Time time;
    char c, c2;
    int numfly, bprice, day, month, year, hours, min, cap;
    string origin, destination, lp;
    luggage.readLuggage();
    list<stack<Luggage>> car;
    cout << "Hello Boss\n";
    cout << "Select one option:\n";
    cout << "[1] Flights Management\n"
         << "[2] Planes Management\n"
         << "[3] Luggage Management\n";
    cin >> c;
    switch (c) {
        case '1':
            cout << "[1] Add new flight\n"
                 << "[2] Remove flight\n";
            cin >> c2;
            switch (c2) {
                case '1':
                    cout << "Insert the flight number: ";
                    cin >> numfly;
                    cout << "Insert the price: ";
                    cin >> bprice;
                    cout << "Insert the day: ";
                    cin >> day;
                    cout << "Insert the month: ";
                    cin >> month;
                    cout << "Insert the year: ";
                    cin >> year;
                    cout << "Insert the hours: ";
                    cin >> hours;
                    cout << "Insert the minutes: ";
                    cin >> min;
                    cout << "Insert the origin: ";
                    cin >> origin;
                    cout << "Insert the destination: ";
                    cin >> destination;
                    cout << "Insert the plane's license plate: ";
                    cin >> lp;
                    cout << "Insert the plane's capacity: ";
                    cin >> cap;

                    date = Date(day, month, year);
                    time = Time(hours, min);
                    plane1 = Plane(lp, cap);
                    flight1 = Flight(numfly, date, time, origin, destination, bprice, plane1);
                    flight.addFlight(flight1);
                    break;
                case '2':
                    cout << "Insert the flight number: ";
                    cin >> numfly;
                    flight1 = Flight(numfly);
                    flight.removeFlight(flight1);
                    break;

            }
            break;
        case '2':
            cout << "[1] Add new plane\n"
                 << "[2] Remove plane\n"
                 << "[3] See all planes\n";
            cin >> c2;
            switch (c2) {
                case '1':
                    lp = plane.generateLicensePlate();
                    cout << "Insert the plane's capacity: ";
                    cin >> cap;

                    plane1 = Plane(lp, cap);
                    plane.addPlane(plane1);
                    break;
                case '2':
                    cout << "Insert the plane's license plate: ";
                    cin >> lp;
                    cout << "Insert the plane's capacity: ";
                    cin >> cap;

                    plane1 = Plane(lp, cap);
                    plane.removePlane(plane1);
                    break;

            }
            break;
        case '3':
            cout << "Select a plane to start the luggage process: \n";
            cin >> lp;
            luggage.addToCar(lp);
            cout << luggage.numCarsUsed() << " cars will be needed to fill this plane\n";
            break;
    }
}