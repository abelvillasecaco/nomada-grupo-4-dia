// Lee un número menor a 4000 y conviértelo a números romanos.

// 1 => I
// 2 => II
// 4 => IV
// 5 => V
// 9 => IX
// 10 => X
// 50 => L
// 100 => C
// 500 => D
// 1000 => M

// 14 => XIV
// 49 => XLIX
// 2024 => MMXXIV
// 3999 => MMMCMXCIX

// Entrada: 1987

#include <iostream>
using namespace std;

int main() {

    int numero, miles, centenas, decenas, unidades;

    cout<<"Ingresa un número menor a 4000: ";
    cin>>numero;

    miles = numero / 1000; // 1
    centenas = (numero % 1000) / 100;
    decenas = (numero % 100) / 10;
    unidades = numero % 10;

    cout<<"Número romano: ";

    switch(miles){
      case 1: cout<<"M"; // M
              break;
      case 2: cout<<"MM";
              break;
      case 3: cout<<"MMM";
              break;
    }

    switch(centenas){
      case 1: cout<<"C";
              break;
      case 2: cout<<"CC";
              break;
      case 3: cout<<"CCC";
              break;
      case 4: cout<<"CD";
              break;
      case 5: cout<<"D";
              break;
      case 6: cout<<"DC";
              break;
      case 7: cout<<"DCC";
              break;
      case 8: cout<<"DCCC";
              break;
      case 9: cout<<"CM"; // CM
              break;
    }

    switch(decenas){
      case 1: cout<<"X";
              break;
      case 2: cout<<"XX";
              break;
      case 3: cout<<"XXX";
              break;
      case 4: cout<<"XL";
              break;
      case 5: cout<<"L";
              break;
      case 6: cout<<"LX";
              break;
      case 7: cout<<"LXX";
              break;
      case 8: cout<<"LXXX"; // LXXX
              break;
      case 9: cout<<"XC";
              break;
    }

    switch(unidades){
      case 1: cout<<"I";
              break;
      case 2: cout<<"II";
              break;
      case 3: cout<<"III";
              break;
      case 4: cout<<"IV";
              break;
      case 5: cout<<"V";
              break;
      case 6: cout<<"VI";
              break;
      case 7: cout<<"VII"; // VII
              break;
      case 8: cout<<"VIII";
              break;
      case 9: cout<<"IX";
              break;
    }

    cout<<endl;

    return 0;
}

// MCMLXXXVII
