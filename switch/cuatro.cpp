// Lee un día y mes cualquiera y determina la estación a la que pertenece.

// | Estación  | Fechas          |
// | --------- | --------------- |
// | Verano    | 21 dic – 20 mar |
// | Otoño     | 21 mar – 20 jun |
// | Invierno  | 21 jun – 22 sep |
// | Primavera | 23 sep – 20 dic |

// Datos de entrada: día y mes
// 15 7

#include <iostream>
using namespace std;

int main() {

    int dia, mes;

    cout<<"Ingresa el día: ";
    cin>>dia;
    cout<<"Ingresa el mes: ";
    cin>>mes;

    switch(mes){

      case 1:
      case 2:
              cout<<"La estación es verano.";
              break;
      case 3:
              if(dia <= 20) cout<<"La estación es verano.";
              else cout<<"La estación es otoño.";
              break;
      case 4:
      case 5:
              cout<<"La estación es otoño.";
              break;
      case 6:
              if(dia <= 20) cout<<"La estación es otoño.";
              else cout<<"La estación es invierno.";
              break;
      case 7:
      case 8:
              cout<<"La estación es invierno.";
              break;
      case 9:
              if(dia <= 22) cout<<"La estación es invierno.";
              else cout<<"La estación es primavera.";
              break;
      case 10:
      case 11:
              cout<<"La estación es primavera.";
              break;
      case 12:
              if(dia <= 20) cout<<"La estación es primavera.";
              else cout<<"La estación es verano.";
              break;
      default:
              cout<<"Fecha inválida."<<endl;
    }

    return 0;
}
