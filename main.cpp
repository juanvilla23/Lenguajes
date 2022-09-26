#include <iostream>
#include "string"
#include "cmake-build-debug/Node.h"
#include "ListaEnlazada.h"

using namespace std;

int main() {
    ListaEnlazada *lista1=new ListaEnlazada();
    while (true) {
        cout << "Bienvenido" << endl;
        cout << "Ingrese 1 para insertar un elemento en la lista" << endl;
        cout<<"Ingrese 4 para eliminar elementos de la lista"<<endl;
        cout<<"Ingrese 5 para calcular la suma promedio de numero pares"<<endl;
        cout << "Ingrese 9 para mostrar elementos repetidos" << endl;
        cout<<"10 Para elminar elementos duplicados de la lista"<<endl;

        int opcion;
        cin>>opcion;
        if(opcion==1){
            int num;
            cout<<"Ingrese el numero que desea agregar: "<<endl;
            cin>>num;
            lista1->insertarElemento(num);
            cout<<lista1->MostrarLista()<<endl;
        }
        if(opcion==2){
            cout<<lista1->MostrarLista()<<endl;
        }
        if(opcion==3){
            int pos;
            cout<<"Ingrese la posicion que desea buscar"<<endl;
            cin>>pos;
            if(lista1->BuscarElemento(*lista1,pos)==0){
                cout<<"Ingrese una posicion Valida"<<endl;
            }else {
                cout << "El valor de esa posicion es: " << lista1->BuscarElemento(*lista1, pos) << endl;
            }
        }
        if(opcion==4){
            int pos;
            cout<<"Ingrese la posicion que desea Eliminar"<<endl;
            cin>>pos;
            lista1->Eliminar(*lista1,pos);
            cout<<lista1->MostrarLista()<<endl;
            cout<<lista1->MostrarLista()<<endl;

        }
        if(opcion==5){
            cout<<lista1->contador()<<endl;

        }
        if(opcion==6){
            cout<<"La suma de los elementos impares es: "<<lista1->sumaPromedioImpares()<<endl;
        }
        if(opcion==7){
            cout<<"El elemento menor es: "<<lista1->MostrarElementoMenor()<<endl;
        }
        if(opcion==8){
           cout<<"El numero mayor de la lista es: "<<lista1->MostrarElementoMayor()<<endl;

        }
        if(opcion==9){
            cout<<lista1->MostrarLista()<<endl;
            lista1->MostrarElementosRepetidos();
        }
        if(opcion==10){
            cout<<lista1->MostrarLista();
            lista1->EliminarNodosDuplicados();
            cout<<lista1->MostrarLista();

        }
        if(opcion==11){
            break;
        }
    }
    return 0;
    }
