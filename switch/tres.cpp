// Ingresa el día y mes de nacimiento de una persona y di cuál es su signo del zodiaco

// | Signo       | Fecha           |
// | ----------- | --------------- |
// | Capricornio | 22 dic – 19 ene |
// | Acuario     | 20 ene – 18 feb |
// | Piscis      | 19 feb – 20 mar |
// | Aries       | 21 mar – 19 abr |
// | Tauro       | 20 abr – 20 may |
// | Géminis     | 21 may – 20 jun |
// | Cáncer      | 21 jun – 22 jul |
// | Leo         | 23 jul – 22 ago |
// | Virgo       | 23 ago – 22 sep |
// | Libra       | 23 sep – 22 oct |
// | Escorpio    | 23 oct – 21 nov |
// | Sagitario   | 22 nov – 21 dic |

#include <iostream>
using namespace std;

int main() {

    int dia, mes;

    cout<<"Ingrese su día de nacimiento: ";
    cin>>dia;
    cout<<"Ingrese su mes de nacimiento: ";
    cin>>mes;

    switch(mes){
      case 1: // Enero
              if(dia <= 19) cout<<"Su signo es Capricornio.";
              else cout<<"Su signo es Acuario.";
              break;
      case 2: // Febrero
              if(dia <= 18) cout<<"Su signo es Acuario.";
              else cout<<"Su signo es Piscis.";
              break;
      case 3: // Marzo
              if(dia <= 20) cout<<"Su signo es Piscis.";
              else cout<<"Su signo es Aries.";
              break;
    }

    return 0;
}
