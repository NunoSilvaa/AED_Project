//
// Created by croipi on 18/12/21.
//

#include "worker.h"
#include <queue>
#include <iostream>

using namespace std;
Worker::Worker(string aname, int aw) {
    this -> name  = aname;
    this -> w = aw;
}

string Worker::getName() {
    return name;
}
int Worker::getW() {
    return w;
}
void Worker::setName(string aname) {
    this -> name = aname;
}
void Worker::setW() {
    this -> w = aw;
}
void Ŵorker::addToE() {
    employees.push(s);
}
Worker Worker::takeWorker() {
    Worker a = employees.pop();
    a.setW(1);
    return a;
}