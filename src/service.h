//
// Created by croipi on 16/12/21.
//

#ifndef AIRPORT_SERVICE_H
#define AIRPORT_SERVICE_H

#include <string>
#include "../utilities/date.h"
#include <queue>
#include "../src/worker.h"

using namespace std;

class Service {
private:
    string type; // tipo de serviço
    Worker worker;
    Date date;
    queue<Service> fila = {};
    int f = 0; // se o serviço foi feito[1] ou nao[0]

public:
    Service(string newtype, Worker neww,  Date newDate);

    string getType();
    Worker getWorker();
    Date getDate();
    int getF();

    void setType(string atype);
    void setWorker(Worker aworker);
    void setDate(Date adate);
    void setF(int a);

    void addToQ(Service s);
    void removeFromQ(Service s);
    void workDone(Service s);
};


#endif //AIRPORT_SERVICE_H
