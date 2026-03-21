// Ingresa diferentes números hasta ingresar 0. Determina cuántos números pares fueron ingresados.

// 2 7 4 7 0
// Fueron ingresados 2 números pares
// n % 2 == 0

#include <iostream>

using namespace std;

int main() {

    int n = 1, contador = 0;

    while(n != 0){
      cout<<"Ingresa los números (0 para finalizar): ";
      cin>>n;

      if(n != 0 && n % 2 == 0){
        contador++;
      }
    }

    cout<<"Los pares son: "<<contador<<endl;

    return 0;
}
