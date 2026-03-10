// Elabora un algoritmo que resuelva una ecuación de primer grado.
// ax + b = 0 => x = -b / a
// a != 0

#include <iostream>
using namespace std;

int main() {

    float a, b, x;

    cout<<"Ingresa el valor de a: ";
    cin>>a;

    cout<<"Ingresa el valor de b: ";
    cin>>b;

    if(a != 0){

      x = -b / a;
      cout<<"La solución de la ecuación es: "<<x<<endl;

    }else{

      if(b == 0){
        cout<<"La ecuación tiene infinitas soluciones. "<<endl;
      }else{
        cout<<"La ecuación no tiene solución. "<<endl;
      }

    }

    return 0;
}
