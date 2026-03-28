#include <iostream>

using namespace std;

// DECLARACIÓN Y DEFINICIÓN DE UNA FUNCIÓN
void duplicarValor (int num) {
    num = num * 2;
    cout<<"Valor dentro de la función: "<<num<<endl; // Valor dentro la función: 20
}

int main() {

    int valor = 10;
    duplicarValor(valor); // Pase por valor
    cout<<"Valor fuera de la función: "<<valor<<endl; // Valor fuera de la función: 20

    return 0;
}
