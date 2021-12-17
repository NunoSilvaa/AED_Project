//
// Created by croipi on 16/12/21.
//

#include "service.h"
#include <iostream>
#include "../utilities/date.h"
#include <string>


Service::Service(string aType, string aWorker, Date aDate){
    this -> type = aType;
    this -> worker = aWorker;
    this -> date = aDate;
}
string Service::getType() {
    return type;
}
string Service::getWorker() {
    return worker;
}
Date Service::getDate() {
    return date;
}

void Service::setType(string atype) {
    this -> type = atype;
}
void Service::setWorker(string aworker) {
    this -> worker = aworker;
}
void Service::setDate(Date adate) {
    this -> date = adate;
}

void Service::addToQ(Service s) {
    this -> fila.push(s);
}
void Service::removeFromQ(Service s) {
    this -> fila.pop();
}