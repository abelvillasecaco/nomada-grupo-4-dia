#include <iostream>
using namespace std;

int main() {

    int opcion;

    cout<<"Selecciona una opción (1 - 3): ";
    cin>>opcion; // 2

    switch(opcion){
      case 1:
              cout<<"Has seleccionado la opción 1."<<endl;
              break;
      case 2:
              cout<<"Has seleccionado la opción 2."<<endl;
              break;
      case 3:
              cout<<"Has seleccionado la opción 3."<<endl;
              break;
      default:
              cout<<"Opción inválida."<<endl;
    }

    return 0;
}
