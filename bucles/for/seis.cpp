// Solicita al usuario un número entero N. Luego, ingresa N número y determina:
// - El número mayor
// - El número menor

#include <iostream>

using namespace std;

int main() {

    int n, numero, mayor, menor;

    cout<<"Ingresa la cantidad de números a evaluar: ";
    cin>>n; // 3

    cout<<"Ingresa número 1: ";
    cin>>numero; // 2

    mayor = numero; // mayor = 2
    menor = numero; // menor = 2

    for(int i = 2; i <= n; i++){ // i = 4

      cout<<"Ingresa número "<<i<<": ";
      cin>>numero; // 3 5

      if(numero > mayor){
        mayor = numero; // mayor = 5
      }

      if(numero < menor){
        menor = numero; // menor = 2
      }
    }

    cout<<"Mayor: "<<mayor<<endl; // Mayor: 5
    cout<<"Menor: "<<menor<<endl; // Menor = 2

    return 0;
}
