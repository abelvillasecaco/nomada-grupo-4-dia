#include <iostream>
using namespace std;

int main() {

    char calificacion;

    cout<<"Ingresa tu calificación (A, B, C, D, F): ";
    cin>>calificacion;

    switch(calificacion){

      case 'A':
                cout<<"Excelente."<<endl;
                break;
      case 'B':
                cout<<"Bueno."<<endl;
                break;
      case 'C':
                cout<<"Regular."<<endl;
                break;
      case 'D':
                cout<<"Deficiente."<<endl;
                break;
      case 'F':
                cout<<"Reprobado."<<endl;
                break;
     default:
                cout<<"Calificación no válida."<<endl;
    }

    return 0;
}
