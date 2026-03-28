// Escribe una función que reciba un número entero y devuelva true si el número es par
// y false si es impar. Luego, muestra el resultado desde main.

// 1. Recibir un número
// 2. Determinar si es par o impar => numero % 2 == 0 (par)
// 3. Devolver true (par) o false (impar)

#include <iostream>

using namespace std;

bool esPar(int); // Declaración de función => Función prototipo

int main() {

    int numero;

    cout<<"Ingresa un número: ";
    cin>>numero; // 7

    bool resultado = esPar(numero);

    if(resultado){
      cout<<"El número es par."<<endl;
    }else{
      cout<<"El número es impar."<<endl;
    }

    return 0;
}

bool esPar(int numero) {

    if(numero % 2 == 0){
      return true;
    }else{
      return false;
    }
}
