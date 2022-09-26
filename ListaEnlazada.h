
#pragma once
#ifndef UNTITLED11_LISTAENLAZADA_H
#define UNTITLED11_LISTAENLAZADA_H
#include "cmake-build-debug/Node.h"

using namespace std;
class ListaEnlazada{
    private:
        Node* head;
    public:
        ListaEnlazada();
        void insertarElemento(int valor);
        void MostrarElemento(int posicion);
        int BuscarElemento(ListaEnlazada L1, int posicion);
        void Eliminar(ListaEnlazada l1,int pos);
        int sumaPromedioImpares();
        int sumaPromedioPares();
        int MostrarElementoMenor();
        int MostrarElementoMayor();
        void MostrarElementosRepetidos();
        void EliminarNodosDuplicados();
        string MostrarLista();
        int contador();
    };


#endif //UNTITLED11_LISTAENLAZADA_H
