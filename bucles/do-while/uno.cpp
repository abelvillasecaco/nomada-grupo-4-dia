// Lee una serie de números hasta ingresar el valor de 0.
// Luego indica cuántos números positivos, negativos, pares e impares fueron ingresados.

// 2 56 -1 3 7 0

#include <iostream>

using namespace std;

int main() {

    int numero, positivos = 0, negativos = 0, pares = 0, impares = 0;

    do{

      cout<<"Ingresa un número (0 para terminar): ";
      cin>>numero; // 56

      if(numero != 0){

        if(numero > 0){
          positivos++; // postivos = 4
        }else{
          negativos++; // negativos = 1
        }

        if(numero % 2 == 0){
          pares++; // pares = 2
        }else{
          impares++; // impares = 3
        }
      }
    }while(numero != 0);

    cout<<"=== RESULTADOS ==="<<endl;
    cout<<"Número positivos: "<<positivos<<endl;
    cout<<"Número negativos: "<<negativos<<endl;
    cout<<"Número pares: "<<pares<<endl;
    cout<<"Número impares: "<<impares<<endl;

    return 0;
}
