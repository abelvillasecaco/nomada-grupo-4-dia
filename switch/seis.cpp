// Lee tres números que representen el día, mes y el año, y di si forman una fecha correcta.
// Considera años bisiestos.

// - Meses con 30 días
// - Meses con 31 días
// - Febrero con 28 o 29 días

// 1. Es divisible entre 4
// 2. Pero no es divisible entre 100
// 3. O es divisible entre 400

#include <iostream>
using namespace std;

int main() {

    int dia, mes, anio, diasMaximos;

    cout<<"Ingresa una fecha (DD/MM/AAAA): ";
    cin>>dia>>mes>>anio; // 14/3/2026

    if(mes < 1 || mes > 12){
      cout<<"Fecha incorrecta."<<endl;
    }else{
      switch(mes){

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                diasMaximos = 31;
                break;
        case 4:
        case 6:
        case 9:
        case 11:
                diasMaximos = 30;
                break;
        case 2:
                if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
                  diasMaximos = 29;
                }else{
                  diasMaximos = 28;
                }
                break;
      }

      if(dia >= 1 && dia <= diasMaximos){
        cout<<"Fecha correcta."<<endl;
      }else{
        cout<<"Fecha incorrecta."<<endl;
      }
    }

    return 0;
}
