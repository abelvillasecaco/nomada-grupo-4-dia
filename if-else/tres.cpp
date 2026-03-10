// Una llamada telefónica cuesta S/. 0.50 por los primeros tres minutos o menos.
// Cada minuto adicional es un paso de contador y cuesta S/. 0.1. Calcula el
// monto de una llamada cualquiera.

// Si minutos <= 3 => costo = 0.50
// Si minutos > 3 => costo = 0.50 + (minutos adicionales * 0.1)

#include <iostream>
using namespace std;

int main() {

    int minutos;
    float costo;

    cout<<"Ingresa la duración de la llamada: ";
    cin>>minutos; // 7

    if(minutos <= 3){
      costo = 0.5;
    }else{
      int adicionales = minutos - 3; // 4
      costo = 0.5 + adicionales * 0.1; // 0.9
    }

    cout<<"El costo de la llamada es S/."<<costo<<endl;

    return 0;
}
