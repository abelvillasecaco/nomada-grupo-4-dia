// Solicita dos números enteros: inicio y fin. Calcula la suma de todos los números pares dentro de
// ese rango (incluye los extremos).

// Inicio: 2
// Fin: 5

// 2 4 = 6

#include <iostream>

using namespace std;

int main() {

    int inicio, fin, suma = 0;

    cout<<"Ingresa el inicio del rango: ";
    cin>>inicio; // 2
    cout<<"Ingresa el fin del rango: ";
    cin>>fin; // 5

    for(int i = inicio; i <= fin; i++){
      if(i % 2 == 0){
        suma = suma + i; // suma = 6
      }
    }

    cout<<"La suma de los números pares es: "<<suma<<endl; // 6

    return 0;
}
