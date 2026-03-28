// Escribe una función que reciba dos números enteros: una base y un exponente, y devuelva la
// base elevada a la potencia del exponente.

// Recibes: base (entero) y exponente (entero)
// Devuelves: el resultado de elevar la base al exponente

// 2 elevado 3 = 2 x 2 x 2 = 8
// 5 elevado 2 = 5 x 5 = 25
// 3 elevado 0 = 1

// resultado = resultado * base;

#include <iostream>

using namespace std;

int potencia(int base, int exponente){ // 2 3

    int resultado = 1;

    for(int i = 1; i <= exponente; i++){
      resultado = resultado * base; // resultado = 8
    }

    return resultado; // return 8
}

int main() {

    int base, exponente, resultado;

    cout<<"Ingresa la base: ";
    cin>>base; // 2

    cout<<"Ingresa la exponente: ";
    cin>>exponente; // 3

    resultado = potencia(base, exponente);

    cout<<"El resultado es: "<<resultado<<endl;

    return 0;
}
