//
// Created by croipi on 16/12/21.
//

#include "../utilities/date.h"
#include <string>


Service::Service (string newtype, Worker neww, Date adate) {
    this -> type = newtype;
    this -> worker = neww;
    this -> date = adate;
}
string Service::getType() {
    return type;
}
Worker Service::getWorker() {
    return worker;
}
Date Service::getDate() {
    return date;
}
int Service::getF() {
    return f;
}

void Service::setType(string atype) {
    this -> type = atype;
}
void Service::setWorker(Worker aworker) {
    this -> worker = aworker;
}
void Service::setDate(Date adate) {
    this -> date = adate;
}
void Service::setF(int n) {
    this -> f = n;
}

void Service::addToQ(Service s) {
    this -> fila.push(s);
}
void Service::removeFromQ(Service s) {
    this -> fila.pop();
}

void Service::workDone(Service s) {
    s.setF(1);
    s.addToQ(s);
    worker.setW(0);
    worker.addToE();
}
