// Dada una fecha, ¿cuántos días faltan para que termine el año?

// 15 / 3 / 2025 => 365

// Enero = 31
// Febrero = 28
// Marzo = 15

// 31 + 28 + 15 = 74
// 365 - 74 = 291

#include <iostream>
using namespace std;

int main() {

    int dia, mes, anio, diasAcumulados = 0, diasTotales, diasRestantes;
    bool bisiesto;

    cout<<"Ingresa la fecha a evaluar: ";
    cin>>dia>>mes>>anio; // 14 3 2026

    if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
      bisiesto = true;
    else
      bisiesto = false;

    switch(mes){
      case 1: diasAcumulados = 0;
              break;
      case 2: diasAcumulados = 31;
      case 3: diasAcumulados = 31 + (bisiesto ? 29 : 28);
              break;
      case 4: diasAcumulados = 31 + (bisiesto ? 29 : 28) + 31;
              break;
      case 5: diasAcumulados = 31 + (bisiesto ? 29 : 28) + 31 + 30;
              break;
      case 6: diasAcumulados = 31 + (bisiesto ? 29 : 28) + 31 + 30 + 31;
              break;
      case 7: diasAcumulados = 31 + (bisiesto ? 29 : 28) + 31 + 30 + 31 + 30;
              break;
      case 8: diasAcumulados = 31 + (bisiesto ? 29 : 28) + 31 + 30 + 31 + 30 + 31;
              break;
      case 9: diasAcumulados = 31 + (bisiesto ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31;
              break;
      case 10: diasAcumulados = 31 + (bisiesto ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30;
              break;
      case 11: diasAcumulados = 31 + (bisiesto ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
              break;
      case 12: diasAcumulados = 31 + (bisiesto ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
              break;
    }

    int diasTranscurridos = diasAcumulados + dia;

    if(bisiesto)
      diasTotales = 366;
    else
      diasTotales = 365;

    diasRestantes = diasTotales - diasTranscurridos;

    cout<<"Faltan "<<diasRestantes<<" días para terminar el año.";

    return 0;
}

// if(bisiesto){
// dias = 29;
// }else{
//  dias = 28;
// }
