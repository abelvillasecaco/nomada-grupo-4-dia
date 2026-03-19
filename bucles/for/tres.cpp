// Muestra las tablas de multiplicar del 1 al 15.

// 3 x 1 = 3
// 3 x 2 = 6
// 3 x 3 = 9

#include <iostream>

using namespace std;

int main() {

    int resultado;

    for(int i = 1; i <= 15; i++){

      cout<<"=== Tabla del "<<i<<" ==="<<endl; // === Tabla del 2 ===

      for(int j = 1; j <= 12; j++){
        resultado = i * j; // resultado = 2
        cout<<i<<" x "<<j<<" = "<<resultado<<endl; // 2 x 1 = 2
      }
    }

    return 0;
}
