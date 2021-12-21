//
// Created by croipi on 19/12/21.
//

#include "bstt.h"
#include "../utilities/time.h"

using namespace std;

 Bstt::Bst() {
     root = NULL;
 }

  Bstt::Node Bstt::createLeaf(Stcp akey) {
     Node* n = new Node;
     n->key = akey;
     n->left = NULL;
     n->right = NULL;
     return n;
 }

 void Bstt::addLeaf(Stcp key){
     addLeafp(key, root);
 }

 void Bstt::addLeafp(Stcp key, Node *p) {
     if(root == NULL) root = createLeaf(key);
     else if(key < p->key){
         if(p->left != NULL) addLeafp(key, p->left);
         else p->left = createLeaf(key);
     }
     else if(key > p->key){
         if(p->right != NULL) addLeafp(key, p->rigth);
         else p->rigth = createLeaf(key);
     }
     else cout << "The location" << key << "has already been added to the tree"
 }

 void Bstt::printInOrder() {
     printInOrderp(root);
 }

 void Bstt::printInOrderp(Node *p) { //ordem pelo horario
     if(root != NULL){
         if(p->left != NULL) {
             printInOrderp(p->left);
         }
         cout << p->key << " ";
         if(p->right != NULL){
             printInOrder(p->right);
         }
     }
     else{
         cout << "Tree is empty"<<endl;
     }

 }

  Bstt::Node* Bstt::getNode(Stcp key) {
     return getNodep(key, root);
  }
Bstt::Node* Bstt::getNodep(Stcp key, Node* p) {
      if(p != NULL) {
          if(p->key == key) return p;
          else {
              if(key.getTime() < p->key.getTime() ) {
                  return getNodep(key, p-> left);
              }
              else {
                  return getNodep(key, p->right);
              }
          }
      }
      else {
          return NULL;
      }
  }

  Stcp Bstt::getKey(Node *p) {
     if(p != NULL) return p->key;
     else return NULL;
 }

 void Bst::getApartirdas(Stcp key) { // return um Stcp pela hora, ex: Autocarros apartir das 18h
     Node* p = getNode(key);
     if(p != NULL) {
         cout << "Apartir das" << p->key.getHour <<endl;
         /*p -> left == NULL ?
         cout<<"Left child = NULL1n":
         cout <<"left child = " << p->left->key<<endl;
*/
         p -> right == NULL ?
         cout << "Nao existem transportes a esta hora":
         cout << "Há" << p->right->key.getType() << "transportes";

     }
     //else cout << key << "is not in the tree\n"
 }

 void Bstt::getMaisperto(Stcp key) {
     Node* p = getNode(key);
     if(p != NULL) {
         cout << "Os Tranportes mais proximos num raio de" << p->key.getDist() << "sao: " <<endl;
         /*p -> left == NULL ?
         cout<<"Left child = NULL1n":
         cout <<"left child = " << p->left->key<<endl;
*/
         p -> right == NULL ?
         cout << "Nao existem transportes a esta distancia":
         cout << "Há" << p->right->key.getType() << "transportes";

     }
     //else cout << key << "is not in the tree\n"
 }