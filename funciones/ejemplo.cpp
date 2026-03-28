#include <iostream>

using namespace std;

// DECLARACIÓN DE UNA FUNCIÓN
int sumaNumeros (int a, int b);

int main() {

    int numero1, numero2;

    cout<<"Ingresa dos números: ";
    cin>>numero1>>numero2; // 3 4

    int suma = sumaNumeros(numero1, numero2);
    cout<<"El resultado de la suma es: "<<suma<<endl;

    return 0;
}

// DEFINICIÓN DE LA FUNCIÓN
int sumaNumeros (int a, int b) {
  return a + b; // return 7
}
