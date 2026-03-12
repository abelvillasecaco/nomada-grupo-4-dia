// Lee un mes y año y determina cuántos días tiene ese mes.

// Años bisiestos => Febrero 28 o 29 días

// Es divisible entre 4
// Pero no es divisible entre 100
// O es divisible entre 400

// if (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)

#include <iostream>
using namespace std;

int main() {

    int mes, anio;

    cout<<"Ingresa el número del mes (1 - 12): ";
    cin>>mes;

    cout<<"Ingresa el año: ";
    cin>>anio;

    switch(mes){

      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
              cout<<"El mes tiene 31 días."<<endl;
              break;
      case 4:
      case 6:
      case 9:
      case 11:
              cout<<"El mes tiene 30 días."<<endl;
              break;
      case 2:
              if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
                cout<<"El mes tiene 29 días.";
              }else{
                cout<<"El mes tiene 28 días.";
              }
              break;
      default:
              cout<<"Mes inválido."<<endl;
    }

    return 0;
}
