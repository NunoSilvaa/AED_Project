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
    /** ------Functions----*/
    /**
     * adds a new element to the tree
     * @param key represents the element
     * @param p representes the pointer
     */
    void addLeafp(Stcp key, Node* p); //p = parent
    /**
     * prints all nodes in order of p
     * @param p represents the pointer
     */
    void printInOrderp(Node *p);

    /**
     * returns the pointer of the corresponding key
     * @param key represents the element
     * @return the pointer of the node
     */
    Node getNodep(Stcp key);

public:

    /**------Constructor-----*/
    /**
     * default constructor for Bstt class
     * @return the tree
     */
    Bst();
    /**
     * creates a new node with a new key
     * @param key represents the element
     * @return the new node
     */
    Node *createLeaf(Stcp key);
    /**
     * adds a new node to an existing tree
     * @param key represents the element
     */
    void addLeaf(Stcp key);

    /**
     * prints the tree in order
     */
    void printInOrder();
    /**
     * returns the node of the corresponding key
     * @param key represents the element of the node
     * @return a pointer of the node
     */
    Node getNode(Stcp key);
    /**
     * return the element of a node
     * @return the element of a node
     */
    Stcp getKey();
    /**
     * Prints nodes below the parent whose element is key
     * @param key represents the element
     */
    void getApartirdas(Stcp key);
    /**
     * prints nodes below the parent whose element is key
     * @param key represents the element
     */
    void getMaisperto(Stcp key);
};


#endif //AIRPORT_BSTT_H
