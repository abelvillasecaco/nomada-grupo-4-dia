// Desarrolla un programa que simule un sistema de cálculo de facturación de clientes:

// 1. Mostrar un menú (do-while y switch)
//    - 1. Registrar consumo de un cliente
//    - 2. Calcular el total a pagar
//    - 3. Contar cuántos consumos fueron mayores a 50
//    - 4. Mostrar el consumo mayor
//    - 5. Salir
// 2. El usuario ingresará N consumos (uno por uno)
// 3. No se deben usar arreglos (se debe procesar cada dato en el momento)
// 4. Se deben usar funciones para:
//    - Acumular total (for + if)
//    - Contar consumos altos (while + if-else)
//    - Encontrar el mayor (do-while + if)

#include <iostream>

using namespace std;

double totalPagar(){

    int n;
    double consumo, total = 0;

    cout<<"Ingresa el número de consumos: ";
    cin>>n; // 3

    for(int i = 1; i <= n; i++){

      cout<<"Consumo "<<i<<": "; // Consumo 3:
      cin>>consumo; // 90 10 30 = 130

      if(consumo > 0){
        total += consumo; // total = 130
      }
    }

    return total;
}

int contarMayores(){

    int n, contador = 0, i = 1;
    double consumo;

    cout<<"Ingresa el número de consumos: ";
    cin>>n; // 3

    while(i <= n){

      cout<<"Consumo "<<i<<": "; // Consumo 2:
      cin>>consumo; // 200

      if(consumo > 50){

        contador++; // contador = 2

      }

      i++;
    }

    return contador;
}

double mayorConsumo(){

    int n, i = 1;
    double consumo, mayor;

    cout<<"Ingresa el número de consumos: ";
    cin>>n; // 3

    if(n <= 0){
      return 0;
    }

    cout<<"Consumo 1: ";
    cin>>mayor; // mayor = 20

    i = 2;

    do{

      if(i > n) break;

      cout<<"Consumo "<<i<<": "; // Consumo 3:
      cin>>consumo; // 50

      if(consumo > mayor){
        mayor = consumo; // mayor = 50
      }

      i++;

    }while(i <= n);

    return mayor;
}

int main() {

    int opcion;

    do{

      cout<<"=== MENÚ DE FACTURACIÓN ==="<<endl;
      cout<<"1. Registrar consumos"<<endl;
      cout<<"2. Calcular total"<<endl;
      cout<<"3. Consumos > 50"<<endl;
      cout<<"4. Consumo mayor"<<endl;
      cout<<"5. Salir"<<endl;
      cout<<"Selecciona una opción: ";
      cin>>opcion;

      switch(opcion){

        case 1: {
                int n;
                double consumo;

                cout<<"Ingresa el número de consumos: ";
                cin>>n;

                for(int i = 1; i <= n; i++){
                  cout<<"Consumo "<<i<<": ";
                  cin>>consumo; // 90 10 30 = 130
                }

                break;

        }

        case 2: {
                int total = totalPagar();
                cout<<"El total es: "<<total<<endl;
                break;
        }


        case 3: {
                int mayores = contarMayores();
                cout<<"Existen "<<mayores<<" consumos mayores a 50."<<endl;
                break;
        }

        case 4: {
                double mayorCon = mayorConsumo();
                cout<<"El mayor consumo fue de: "<<mayorCon<<endl;
                break;
        }

        case 5:
                cout<<"Saliendo..."<<endl;
                break;

        default:
                cout<<"Opción inválida.";
      }

    }while(opcion != 5);

    return 0;
}
