// Crea un programa que simule un menú de opciones para realizar operaciones aritméticas
// simples: suma, resta, multiplicación, división y potencia.

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int opcion;
    float numero1, numero2, resultado;

    cout<<endl;
    cout<<"=== MENÚ DE OPERACIONES ==="<<endl;
    cout<<"1. Suma"<<endl;
    cout<<"2. Resta"<<endl;
    cout<<"3. Multiplicación"<<endl;
    cout<<"4. División"<<endl;
    cout<<"5. Potencia"<<endl;
    cout<<"Seleccione una opción: ";
    cin>>opcion;

    cout<<"Ingresa los números a operar: ";
    cin>>numero1>>numero2;

    switch(opcion){
      case 1:
              resultado = numero1 + numero2;
              cout<<"Resultado de la suma: "<<resultado<<endl;
              break;
      case 2:
              resultado = numero1 - numero2;
              cout<<"Resultado de la resta: "<<resultado<<endl;
              break;
      case 3:
              resultado = numero1 * numero2;
              cout<<"Resultado de la multiplicación: "<<resultado<<endl;
              break;
      case 4:
              if(numero2 != 0){
                resultado = numero1 / numero2;
                cout<<"Resultado de la división: "<<resultado<<endl;
              }else{
                cout<<"Error: no se puede dividir entre cero."<<endl;
              }
              break;
      case 5:
              resultado = pow(numero1, numero2);
              cout<<"Resultado de la potencia: "<<resultado<<endl;
              break;
      default:
              cout<<"Opción inválida."<<endl;
    }

    return 0;
}
