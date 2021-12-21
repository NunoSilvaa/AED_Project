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
    /**-----Constructor----*/
    /**
     * default constructor for class service
     * @param newtype represents the type
     * @param neww represents the worker
     * @param newDate represents the date
     */
    Service(string newtype, Worker neww,  Date newDate);

    /**----Getters---*/
    /**
     * function to return type
     * @return the service type
     */
    string getType();
    /**
     * function to return the worker
     * @return the service worker
     */
    Worker getWorker();
    /**
     * function to return the date
     * @return the date of the service
     */
    Date getDate();
    /**
     * function to return f
     * @return f from the service
     */
    int getF();
    /**
     * setter for the type
     * @param atype is the new type
     */
    void setType(string atype);
    /**
     * setter for the worker
     * @param aworker is the new worker
     */
    void setWorker(Worker aworker);
    /**
     * setter for the date
     * @param adate is the date
     */
    void setDate(Date adate);
    /**
     * setter for f
     * @param a is the new f
     */
    void setF(int a);
    /**
     *adds a service to queue fila
     * @param s is a member of fila
     */
    void addToQ(Service s);
    /**
     * removes a service from fila
     * @param s is not a member of fila
     */
    void removeFromQ(Service s);
    /**
     *changes the f to 1 and the w of a worker to 1
     * @param s is the changed service
     */
    void workDone(Service s);
};


#endif //AIRPORT_SERVICE_H
