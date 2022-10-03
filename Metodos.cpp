#include "Metodos.h"
#include "Nodo.h"
#include <iostream>
#include <stdlib.h>
Metodos::Metodos(){
}
  void Metodos:: insertarenLista(Nodo *&lista,int n){
    Nodo *nuevo_nodo = new Nodo(n);       
    Nodo *aux1 = lista;
    Nodo *aux2;
    while(aux1 != NULL){
      aux2 = aux1;
      aux1 = aux1->sigt;
    }
    if(lista == aux1){
      lista = nuevo_nodo;
    }
    else{
      aux2->sigt = nuevo_nodo;
    }
    nuevo_nodo->sigt = aux1;
    cout << "Número agregado correctamente."<<endl;
  }

  void Metodos::mostrarElementos(Nodo *&lista){
    Nodo *nuevo_nodo = lista;
    while(nuevo_nodo != NULL){
      cout<<nuevo_nodo->dato<<endl;
      nuevo_nodo = nuevo_nodo->sigt;
    }
  }
  void Metodos::BuscarElementos(Nodo *b, int n){
      if(b == NULL){
          cout<<"No hay nada que eliminar."<<endl;
      }
      int c = 0;
      while(b->sigt != NULL){
          if(b->dato == n){
              c = 1;
              b = b->sigt;
          }
          else{
              b = b->sigt;
          }
      }
      if(c == 1){
          cout<<"El dato se encontró en la lista."<<endl;
      }
      else{
            cout<<"El dato no se encontró en la lista."<<endl;
        }
  }
  void Metodos::eliminarElemento(Nodo *b,int n){
      if(b == NULL){
          cout<<"No hay elementos que eliminar."<<endl;
      }
      if(b->dato == n){
              b = b->sigt;
          }
    while(b->sigt != NULL){
          if(b->sigt->dato == n){
          b->sigt = b->sigt->sigt;
          
      }
      else{
          b = b->sigt;
      }
      
      } 
     cout<<"Se eliminó a "<<n<<" de la lista."<<endl; 
  }
  void Metodos::calcularPromedioPares(Nodo *b){
      int sum = 0;
      int cont = 0;
      while(b != NULL){
          if(b->dato%2 == 0){
              sum = sum + b->dato;
              cont = cont + 1;
              b = b->sigt;
          }
          else{
          b = b->sigt;
          }
      }
      int prom;
      if(cont != 0){
        prom = sum/cont;
      }
      else{
        prom = 0;
      }
      
      cout<<"El promedio de los números pares es: "<<prom<<endl;
  }
  void Metodos::calcularPromedioImpares(Nodo *b){
      int sum = 0;
      int cont = 0;
      while(b != NULL){
          if(b->dato%2 != 0){
              sum = sum + b->dato;
              cont = cont + 1;
              b = b->sigt;
          }
          else{
          b = b->sigt;
          }
      }
      int prom;
      if(cont != 0){
        prom = sum/cont;
      }
      else{
        prom = 0;
      }
      cout<<"El promedio de los números impares es: "<<prom<<endl;
  }
  
  void Metodos::calcularMenor(Nodo *b){
      Nodo *actual = new Nodo();
    actual = b;
    int menor = actual->dato;
    while(actual != NULL){
        if(actual->dato < menor){
            menor = actual->dato;
        }
        actual = actual->sigt;
    }
    cout << "El número menor de la lista es: " << menor << endl;
}

void Metodos::calcularMayor(Nodo *b){
      Nodo *actual = new Nodo();
    actual = b;
    int mayor = actual->dato;
    while(actual != NULL){
        if(actual->dato > mayor){
            mayor = actual->dato;
        }
        actual = actual->sigt;
    }
    cout << "El número mayor de la lista es: " << mayor << endl;
}
void Metodos::mostrarRepetidos(Nodo *b){
      Nodo *actual = new Nodo();
    actual = b;
    int contador = 1;
    while(actual != NULL){
        Nodo *siguiente = new Nodo();
        siguiente = actual->sigt;
        while(siguiente != NULL){
            if(actual->dato == siguiente->dato){
                contador++;
            }
            siguiente = siguiente->sigt;
        }
        if(contador > 1){
            cout << "El número " << actual->dato << " se repite " << contador << " veces" << endl;
        }
        contador = 1;
        actual = actual->sigt;
    }
  }
