#ifndef METODOS_H_
#define METODOS_H_
#include <iostream>
#include <stdlib.h>
#include "Nodo.h"
using namespace std;

class Metodos{
  public:
    Metodos();
    void insertarenLista(Nodo *&lista,int n);
    void mostrarElementos(Nodo *&lista);
    void BuscarElementos(Nodo *lista, int dato);
    void eliminarElemento(Nodo *lista, int dato);
    void calcularPromedioPares(Nodo *lista);
    void calcularPromedioImpares(Nodo *lista);
    void calcularMenor(Nodo *lista);
    void calcularMayor(Nodo *lista);
    void mostrarRepetidos(Nodo *lista);
    void eliminarRepetidos(Nodo *lista);
    
};


#endif