// Lee un número e invierte sus cifras

// int numero = 1234
// 4321

// numero % 10 = 4
// numero / 10 = 123

// numero % 10 = 3
// numero / 10 = 12

// numero % 10 = 2
// numero / 10 = 1

// numero % 10 = 0

#include <iostream>

using namespace std;

int main() {

    int numero, invertido = 0, digito;

    cout<<"Ingresa un número: ";
    cin>>numero; // 1234

    while(numero > 0){

      digito = numero % 10;
      invertido = invertido * 10 + digito; // 4321
      numero = numero / 10; // 0
    }

    cout<<"El número invertido es: "<<invertido<<endl;

    return 0;
}
