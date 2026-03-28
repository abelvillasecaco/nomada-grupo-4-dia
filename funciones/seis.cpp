// Escribe una función que reciba el radio de un círculo y devuelva su área.

// const pi = 3.14;

// radio = 2

// AreaCirculo = pi * radio * radio

#include <iostream>

using namespace std;

float areaCirculo(float radio){

    const float PI = 3.1416;

    float area;

    area = PI * radio * radio; // area = 3.1416 * 3 * 3 = 28.2744

    return area; // 28.2744
}

int main() {

    float radio, resultado;

    cout<<"Ingresa el área de un círculo: ";
    cin>>radio; // 3

    resultado = areaCirculo(radio);

    cout<<"El área del círculo es: "<<resultado<<endl;

    return 0;
}
