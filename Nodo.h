#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Nodo {
    public:
  int dato;
  Nodo* sigt;
  Nodo();
  Nodo(int n);
  private:
};


#endif