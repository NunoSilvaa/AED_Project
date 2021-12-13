//
// Created by nmls1 on 05/12/2021.
//

#include "luggage.h"

using namespace std;

Luggage::Luggage(int weight) {
    this->weight = weight;
}

int Luggage::getWeight() const {
    return weight;
}

void Luggage::setWeight(int weight) {
    this->weight = weight;
}
