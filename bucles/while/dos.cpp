// Indicar si un número es primo.

// 7

#include <iostream>

using namespace std;

int main() {

    int numero, divisor = 2;
    bool esPrimo = true;

    cout<<"Ingresa un número: ";
    cin>>numero; // 8

    if(numero <= 1){
      cout<<"El número no es primo."<<endl;
    }else{

      while(divisor < numero){
        if(numero % divisor == 0){
          esPrimo = false;
        }
        divisor++;
      }

      if(esPrimo){
        cout<<"El número es primo."<<endl;
      }else{
        cout<<"El número no es primo."<<endl;
      }
    }
    return 0;
}
