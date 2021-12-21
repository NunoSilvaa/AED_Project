//
// Created by croipi on 18/12/21.
//

#ifndef AIRPORT_WORKER_H
#define AIRPORT_WORKER_H

#include <string>
#include <iostream>

class worker {
    class Worker {
    private:
        string name;
        int w; //work load, se esta livre pra trabalhar = 0 ,se esta num trabalho = 1

    public:
        queue<Worker> employees = {};
        /** ----Constructor ----*/
        /**
         * constructor for Worker class
         * @param aname represents the name of a worker
         * @param aw represents if the worker is working or not
         */
        Worker(string aname, int aw);

        /** default constructor */
        Worker();
        /** Getters */
        /**
         * getter for name of worker
         * @return the workers name
         */
        string getName();

        /**
         * getter for work status
         * @returns the work status of a worker
         */
        int getW();
        /** ----Setters----*/
        /**
         * setter for name of worker
         * @param aname represents name of worker
         */
        void setName(string aname);
        /**
         * setter for work status of worker
         * @param aw represents work status of Worker
         */
        void setW(int aw);

        /**-----Functions-----*/
        /**
         * adds a worker to the employees queue
         */
        void addToE();
        /**
         * returns worker from employees queue
         * @return a the name of the worker
         */
        Worker takeWorker();
    };


#endif //AIRPORT_WORKER_H
