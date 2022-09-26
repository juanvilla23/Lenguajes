#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    vector<int> elementos = {2,3,4,1,22,2,9,0};
    priority_queue<int> pq;//declaro el la priority queue, la cual guarda enteros
    while (!elementos.empty()){//empty es una funcion que pregunta, si contiene elementos
        pq.push(elementos.front());//va agregar el primer elemento a la priority
        elementos.erase(elementos.begin());//va eliminar el primer elemento de elementos
    }
    pq.pop();//eliminar el primer elemento de la priority quiu
    while (!pq.empty()){//
        cout << pq.top() << endl;// top es para obtener el primer elemento
        pq.pop();//elimar el primer elemento
    }

}