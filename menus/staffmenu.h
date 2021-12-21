//
// Created by croipi on 18/12/21.
//

#ifndef AIRPORT_STAFFMENU_H
#define AIRPORT_STAFFMENU_H

#include "service.h"
#include "Data.h"

class Staffmenu {
public:
    /**
     * Default construtor
     */
    Staffmenu();
    /**
     * function that executes
     * @param type represents the type of transportation
     * @param worker represents the assign worker
     * @param data represents the date
     */
    void runStaffmenu(string type, string worker, Data data);
};


#endif //AIRPORT_STAFFMENU_H
