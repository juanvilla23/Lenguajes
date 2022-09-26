//
// Created by jcvil on 12/09/2022.
//

#ifndef UNTITLED11_NODE_H
#define UNTITLED11_NODE_H

#pragma once
#include "iostream"
#include "string"
using namespace std;
class Node{
private:
    int valor;
    Node* next;
public:
    Node(int valor, Node *next);
    Node(int valor);
    Node();
    void setNext(Node *next);
    void setValor(int valor);
    int getValor();
    Node *getNext();
};


#endif //UNTITLED11_NODE_H
