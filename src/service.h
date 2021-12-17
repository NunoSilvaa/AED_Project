//
// Created by croipi on 16/12/21.
//

#ifndef AIRPORT_SERVICE_H
#define AIRPORT_SERVICE_H

#include <string>
#include "../utilities/date.h"
#include <queue>

using namespace std;

class Service {
private:
    string type; // tipo de serviço
    string worker;
    Date date;
    queue<Service> fila = {};

public:
    Service(string newType, string newWorker, Date newDate);

    string getType();
    string getWorker();
    Date getDate();

    void setType(string atype);
    void setWorker(string aworker);
    void setDate(Date adate);

    void addToQ(Service s);
    void removeFromQ(Service s);
};


#endif //AIRPORT_SERVICE_H
