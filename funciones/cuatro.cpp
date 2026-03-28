// Escribe una función que reciba tres números enteros como parámetros y devuelva el mayor de ellos.

// Número a
// Número b
// Número c

#include <iostream>

using namespace std;

int mayor(int a, int b, int c){

    if(a >= b && a >= c){
      return a;
    }else if(b >= a && b >= c){
      return b;
    }else{
      return c;
    }
}

int main() {

    int num1, num2, num3;

    cout<<"Ingresa tres números: ";
    cin>>num1>>num2>>num3; // 3 8 1

    int resultado = mayor(num1, num2, num3);

    cout<<"El número mayor es: "<<resultado<<endl;

    return 0;
}
