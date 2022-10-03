#include "Nodo.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
Nodo::Nodo(){
    this->dato = 0;
    this->sigt = nullptr;
}
Nodo::Nodo(int n){
    this->dato = n;
    this->sigt = nullptr;
}
