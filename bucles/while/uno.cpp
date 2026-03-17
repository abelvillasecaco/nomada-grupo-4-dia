// Factorizar un número ingresado por teclado.

// 12 => 2 * 2 * 3
// 18 => 2 * 3 * 3

#include <iostream>

using namespace std;

int main() {

    int numero, divisor = 2, numeroOriginal;

    cout<<"Ingresa el número a factorizar: ";
    cin>>numero; // 60

    numeroOriginal = numero;

    cout<<"Factorización de "<<numeroOriginal<<" = "; // Factorización de 60 = 2 * 2 * 3 * 5

    while(numero > 1){

      if(numero % divisor == 0){
        cout<<divisor;
        numero = numero / divisor; // 1

        if(numero > 1){
          cout<<" * ";
        }
      }else{
        divisor++; // divisor = 5
      }
    }

    cout<<endl;

    return 0;
}
