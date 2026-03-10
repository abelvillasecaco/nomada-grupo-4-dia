// Escribe un algoritmo que reciba el promedio de un alumno y diga cuál es su rendimiento.

// Considera:
// 1. Datos erróneos => promedio < 0 || promedio > 20
// 2. Rendimiento pésimo => 0 - 5
// 3. Rendimiento deficiente => 6 - 10
// 4. Rendimiento regular => 11 - 14
// 5. Rendimiento bueno => 15 a más

#include <iostream>
using namespace std;

int main() {

    float promedio;

    cout<<"Ingresa el promedio del alumno: ";
    cin>>promedio; // 13

    if(promedio < 0 || promedio > 20){

      cout<<"Dato erróneo."<<endl;

    }else if(promedio <= 5){

      cout<<"Rendimiento PÉSIMO."<<endl;

    }else if(promedio <= 10){

      cout<<"Rendimiento DEFICIENTE."<<endl;

    }else if(promedio <= 14){

      cout<<"Rendimiento REGULAR."<<endl;

    }else{

      cout<<"Rendimiento BUENO."<<endl;

    }

    return 0;
}
