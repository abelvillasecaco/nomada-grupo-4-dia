// Calcula el área máxima de un terreno si las longitudes son x y (20-X).

// Un lado mide X
// 20-X

// A = X(20-X)

// X > 0
// 20 - X > 0

#include <iostream>

using namespace std;

int main() {

    int x = 1;
    int lado2;
    int area;
    int areaMax = 0;
    int mejorX = 0;

    do {

      lado2 = 20 - x;
      area = x * lado2;
      cout<<"x = "<<x<<" lado2 = "<<lado2<<" area = "<<area<<endl;

      if(area > areaMax){
        areaMax = area;
        mejorX = x;
      }

      x++;

    }while(x < 20);

    cout<<"=== RESULTADO FINAL ==="<<endl;
    cout<<"El área máxima encontrada es: "<<areaMax<<endl;
    cout<<"Se obtiene cuando x = "<<mejorX<<endl;
    cout<<"El otro lado vale: "<<20 - mejorX<<endl;

    return 0;
}
