//
// Created by nmls1 on 29/11/2021.
//

#ifndef AIRPORT_LUGGAGE_H
#define AIRPORT_LUGGAGE_H

class Luggage {
private:
    int weight;

public:
    Luggage(int weight);

    int getWeight() const;

    void setWeight(int weight);
};

#endif //AIRPORT_LUGGAGE_H

