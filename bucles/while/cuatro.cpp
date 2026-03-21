// Solicita al usuario un número entero positivo N. Luego, pide que ingrese N números y calcula la suma total.

// 3
// 3 7 1 = 11

#include <iostream>

using namespace std;

int main() {

    int n, contador = 1, numero, suma = 0;

    cout<<"Ingresa la cantidad de números a sumar: ";
    cin>>n; // n = 3

    if(n >= 0){

      while(contador <= n){
        cout<<"Ingresa el número "<<contador<<": "; // Ingresa el número 3:
        cin>>numero; // 1

        suma = suma + numero; // suma = 11

        contador++; // 4
      }

      cout<<"La suma total es: "<<suma<<endl; // La suma total es: 11

    }else{
      cout<<"El número debe ser positivo."<<endl;
    }

    return 0;
}
