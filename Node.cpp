
#include "iostream"
#include "string"
#include "Node.h"

using namespace std;
Node::Node(int _valor, Node *_next) {
    this-> valor=_valor;
    this-> next= _next;
}
Node::Node(int _valor){
    this -> valor = _valor;
    this -> next = NULL;
}

void Node::setNext(Node *_next) {
    this -> next=_next;
}
void Node::setValor(int _valor) {
    this->valor = _valor;
}
int Node::getValor() {
    return this -> valor;
}
Node* Node::getNext() {
    return this -> next;
}