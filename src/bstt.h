//
// Created by croipi on 19/12/21.
//

#ifndef AIRPORT_BSTT_H
#define AIRPORT_BSTT_H

#include <string>
#include <iostream>
#include "../utilities/time.h"
#include "stcp.h"



class Bstt {
private:
    struct Node {
        Stcp key;
        Node *left;
        Node *right;
    };

    Node *root;
    void addLeafp(Stcp key, Node* p); //p = parent
    void printInOrderp(Node *p);
    Node getNodep(Stcp key);

public:
    Bst();
    Node *createLeaf(Stcp key);
    void addLeaf(Stcp key);
    void printInOrder();
    Node getNode(Stcp key);
    Stcp getKey();
    void getApartirdas(Stcp key);
    void getMaisperto(Stcp key);
};


#endif //AIRPORT_BSTT_H
