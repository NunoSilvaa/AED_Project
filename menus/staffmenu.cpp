//
// Created by croipi on 18/12/21.
//

#include "staffmenu.h"
#include "mainMenu.h"
#include "../src/worker.h"

Staffmenu::Staffmenu() {}

void Staffmenu::runStaffmenu() {
    int n;
    string type;
    Date date;
    Worker a;
    cout << "Choose the required service: \n[1] Maintenance\n[2] Cleaning";
    cin >> n;
    if(n == 1) type = Maintenance;
    if(n == 2) type  = Cleaning;
    else {
        cout <<  " Error, wrong input\nPlease try again: ";
        cin >> n;
        if(n == 1) type = Maintenance;
        if(n == 2) type  = Cleaning;
    }
    cout << "Input date of service: ";
    cin >> data;
    a = a.takeWorker();
    Service s (type, a, date);
    addToQ(s);
    cout << "Service request accepted";
}