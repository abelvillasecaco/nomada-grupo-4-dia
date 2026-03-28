// Escribe una función que reciba dos números enteros por referencia y los intercambie.
// Muestra los valores antes y después de llamar a la función.

// a = 5
// b = 2

// a = 2
// b = 5

// c = a
// a = b
// b = c

#include <iostream>

using namespace std;

void intercambiarNumeros(int &a, int &b){ // 10 30

    int temp;

    temp = a; // temp = 10
    a = b; // a = 30
    b = temp; // b = 10
}

int main() {

    int num1, num2;

    cout<<"Ingresa el primer número: ";
    cin>>num1;

    cout<<"Ingresa el segundo número: ";
    cin>>num2;

    cout<<"=== Antes del intercambio ==="<<endl;
    cout<<"Número 1: "<<num1<<", Número 2: "<<num2<<endl;

    intercambiarNumeros(num1, num2);

    cout<<"=== Después del intercambio ==="<<endl;
    cout<<"Número 1: "<<num1<<", Número 2: "<<num2<<endl;

    return 0;
}
