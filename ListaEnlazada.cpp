//
// Created by jcvil on 12/09/2022.
//
#include "iostream"
#include "string"
#include "ListaEnlazada.h"
#include <queue>
#include <vector>


using namespace std;
ListaEnlazada::ListaEnlazada(){
    this->head = NULL;
}
void ListaEnlazada::insertarElemento(int valor){
    Node *nuevo_Nodo= new Node(valor);
    nuevo_Nodo->setNext(this->head);
    this->head=nuevo_Nodo;
}
string ListaEnlazada::MostrarLista() {
    if(this->head!=NULL) {
        Node *temp = this->head;
        string texto = "";
        while (temp->getValor() != NULL) {
            texto += (to_string(temp->getValor()) + "->");
            if (temp->getNext() == NULL) {
                texto += "NULL";
                return texto;
            }
            temp = temp->getNext();
        }
    }else{
        cout<<"Ya no quedan Elementos"<<endl;
    }
}
int ListaEnlazada::BuscarElemento(ListaEnlazada l1,int posicion) {
    if (l1.contador() < posicion) {
        return 0;
    } else {
        Node *aux = this->head;
        int tamaño = 1;
        int num = 0;
        while (aux->getValor() != NULL) {
            if (tamaño == posicion) {
                num = aux->getValor();
                break;
            }
            tamaño = tamaño + 1;
            aux = aux->getNext();
        }
        return num;
    }
}
void ListaEnlazada::Eliminar(ListaEnlazada l1,int pos) {
    if (l1.contador() < pos) {
        cout << "No hay elementos por eliminar" << endl;
    } else {
        int tamaño = 1;
        if (this->head != NULL) {
            if (pos == 1) {
                Node *temp = this->head->getNext();
                this->head = temp;
            } else {
                Node *aux = this->head;
                while (aux->getValor() != NULL) {
                    if (tamaño + 1 == pos) {
                        Node *temp = aux->getNext();
                        aux->setNext(temp->getNext());
                        break;
                    }
                    tamaño = tamaño + 1;
                    aux = aux->getNext();
                }
            }
        } else {
        }
    }
}
int ListaEnlazada::contador() {
    int numeroN = 0;
    while (this->head!=NULL) {
        numeroN = numeroN + 1;
        this->head = this->head->getNext();
    }
    return numeroN;
}
int ListaEnlazada::sumaPromedioImpares() {
    int numero=0;
    int numerodepares=0;
    while(this->head!=NULL){
        if(this->head->getValor()%2!=0){
            numero=this->head->getValor()+numero;
            numerodepares=numerodepares+1;
        }
        this->head=this->head->getNext();
    }
    return numero/numerodepares;
}
int ListaEnlazada::sumaPromedioPares() {
    int numero=0;
    int numerodepares=0;
    while(this->head==NULL){
        if(this->head->getValor()%2!=0){
            numero=this->head->getValor()+numero;
        }
        this->head=this->head->getNext();
    }
    return numero/numerodepares;

}
int ListaEnlazada::MostrarElementoMenor() {
    int menor=0;
    while(this->head!=NULL){
        if(this->head->getValor()<menor){
            menor=this->head->getValor();
        }
        this->head=this->head->getNext();
    }
    return menor;
}
void ListaEnlazada::MostrarElementosRepetidos() {
    priority_queue<int> elementosR;
    priority_queue<int> elementosRAux;
    Node *anterior = this->head;
    while (anterior->getValor() != NULL) {
        Node *siguiente = anterior->getNext();
        if (anterior->getNext() == NULL) {
            break;
        }
        while (siguiente->getValor() != NULL) {
            if (siguiente->getValor() == anterior->getValor()) {
                elementosR.push(siguiente->getValor());
                elementosRAux.push(siguiente->getValor());
                break;
            }
            if (siguiente->getNext()==NULL){
                break;
            }
            siguiente = siguiente->getNext();
        }
        anterior = anterior->getNext();

    }
    elementosRAux.pop();
    while (!elementosR.empty()) {
        if (!elementosRAux.empty() && elementosR.top() == elementosRAux.top()) {
            

        } else {
            cout << elementosR.top() << endl;
        }
        if (elementosR.empty() and elementosRAux.empty()) {
        }else{
            elementosR.pop();
            elementosRAux.pop();
        }
    }
}
void ListaEnlazada::EliminarNodosDuplicados() {
    Node* anterior=this->head;
    while(anterior->getNext()!=NULL){
        Node *siguiente=anterior->getNext();
        if (anterior->getNext()==NULL){
            break;
        }
        while(anterior->getValor()!=siguiente->getValor() && siguiente!=NULL){
            siguiente=siguiente->getNext();
            if (siguiente->getNext()==NULL){
                break;
            }
        }
        if (siguiente->getValor()!=NULL){

        }
    }

}
    int ListaEnlazada::MostrarElementoMayor() {
        int mayor = this->head->getValor();
        while (this->head != NULL) {
            if (this->head->getValor() > mayor) {
                mayor = this->head->getValor();
            }
            this->head = this->head->getNext();
        }
        return mayor;
    }
