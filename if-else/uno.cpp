// Si dos números son positivos, calcula su producto; si no lo son calcula la suma.

#include <iostream>
using namespace std;

int main() {

    float num1, num2;

    cout<<"Ingresa los números: ";
    cin>>num1>>num2; // -5 2

    if(num1 > 0 && num2 > 0){

      cout<<"El producto es: "<<num1 * num2<<endl;

    }else{

      cout<<"La suma es: "<<num1 + num2<<endl;

    }

    return 0;
}
