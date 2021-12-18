//
// Created by croipi on 18/12/21.
//

#ifndef AIRPORT_WORKER_H
#define AIRPORT_WORKER_H

#include <string>
#include <iostream>

class Worker {
private:
    string name;
    int w; //work load, se esta livre pra trabalhar = 0 ,se esta num trabalho = 1

public:
    queue<Worker> employees = {};
    Worker(string aname, int aw);

    Worker();

    string getName();
   int getW();

   void setName(string aname);
   void setW(int aw);

   void addToE();
   Worker takeWorker();
};


#endif //AIRPORT_WORKER_H
