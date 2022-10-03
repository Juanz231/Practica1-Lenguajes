#include <iostream>
#include "Nodo.h"
#include "Metodos.h"
using namespace std;
Metodos *controladora = new Metodos();
int main() {
  int w;
  cout<<"Cree primero un nodo para poder seguir con el menú."<<endl;
  cout<<"Ingrese el dato para el primer nodo."<<endl;
  cin>>w;
  Nodo *b = new Nodo(w);
  int t;
    cout << "\n ***** Menú de opciones *****" << endl;
      cout << "       ****************  \n" << endl;
      cout << "1. Insertar elementos a la lista" << endl;
      cout << "2. Mostrar lista de elementos" << endl;
      cout << "3. Buscar elementos en la lista" << endl;
      cout << "4. Eliminar nodos de la lista" << endl;
      cout << "5. Calcular suma promedio de pares" << endl;
      cout << "6. Calcular suma promedio de impares" << endl;
      cout << "7. Calcular el número menor de la lista" << endl;
      cout << "8. Calcular el número mayor de la lista" << endl;
      cout << "9. Mostrar elementos repetidos de la lista" << endl;
      cout << "10. SALIR" << endl;


  while(true){
    cout << "\n Ingrese una opción: ";
    cin>>t;
    if(t == 10){
      break;
    }
  switch(t){
    case 1:
      int n;
      cout<<"Ingrese el dato a insertar: "<<endl;
      cin>>n;
      controladora->Metodos::insertarenLista(b, n);
      break;
    case 2:
      cout<<"Los elementos de la lista son: "<<endl;
      controladora->Metodos::mostrarElementos(b);
      break;
    case 3:
      int z;
      cout<<"Ingrese el dato a buscar: "<<endl;
      cin>>z;
      controladora->Metodos::BuscarElementos(b, z);
      break;
    case 4: 
      int x;
      cout<<"Ingrese el dato a eliminar: "<<endl;
      cin>>x;
      controladora->Metodos::eliminarElemento(b, x);
      break;
    case 5: 
      cout<<"El promedio de los números pares."<<endl;
      controladora->Metodos::calcularPromedioPares(b);
      break;
    case 6:
      cout<<"El promedio de los números impares."<<endl;
      controladora->Metodos::calcularPromedioImpares(b);
      break;
    case 7:
      cout<<"El número menor."<<endl;
      controladora->Metodos::calcularMenor(b);
      break;
    case 8:
      cout<<"El número menor."<<endl;
      controladora->Metodos::calcularMayor(b);
      break;
    case 9:
      cout<<"Repetidos."<<endl;
      controladora->Metodos::mostrarRepetidos(b);
      break;
    default:
      cout<<"Ingrese un valor valido."<<endl;
  }
    }
  
}