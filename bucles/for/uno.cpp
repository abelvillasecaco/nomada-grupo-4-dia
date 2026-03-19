// Un vehículo recorre N distancias en N tiempos diferentes. ¿Cuál será su velocidad promedio para toda la trayectoria?

// Vp = distanciTotal / tiempoTotal

#include <iostream>

using namespace std;

int main() {

    int numeroTramos;
    float distancia, tiempo;
    float sumaDistancias = 0, sumaTiempos = 0;
    float velocidadPromedio;

    cout<<"Ingresa la cantidad de tramos: ";
    cin>>numeroTramos; // 3

    for(int i = 1; i <= numeroTramos; i++){

      cout<<"=== Tramo "<<i<< " ==="<<endl; // Tramo 3
      cout<<"Ingresa la distancia: ";
      cin>>distancia; // 2

      cout<<"Ingresa el tiempo: ";
      cin>>tiempo; // 1

      sumaDistancias = sumaDistancias + distancia; // sumaDistancias = 16
      sumaTiempos = sumaTiempos + tiempo; // sumaTiempos = 5
    }

    velocidadPromedio = sumaDistancias / sumaTiempos; // 3.2

    cout<<"La velocidad promedio es: "<<velocidadPromedio<<endl;

    return 0;
}
