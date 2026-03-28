// Escribe una función que reciba una temperatura en grados Celsius y la convierta a Fahrenheit.

//(0 °C × 9/5) + 32 = 32 °F

#include <iostream>

using namespace std;

float convertirAFahrenheit(float c){

    float fahrenheit;

    fahrenheit = (9.0 / 5.0) * c + 32;

    return fahrenheit;
}

int main() {

    float celsius, fahrenheit;

    cout<<"Ingresa la temperatura en grados Celsius: ";
    cin>>celsius;

    fahrenheit = convertirAFahrenheit(celsius);

    cout<<"La temperatura en grados Fahrenheit es: "<<fahrenheit<<endl;

    return 0;
}
