#include <iostream>
#include <iomanip>

using namespace std;

int pedirNumProductos(){

    int num;

    do{
        cout<<"¿Cuántos productos va a comprar el cliente? (1 al 10): ";
        cin>>num;

        if(num < 1 || num > 10){
            cout<<"[!] Error: Ingresa un número entrte 1 y 10."<<endl;
        }

    }while(num < 1 || num > 10);

    return num;
}

double pedirPrecio(){

    double precio;

    do{
        cout<<"Precio unitario (S/.): ";
        cin>>precio;

        if(precio <= 0){
            cout<<"[!] Error: El precio debe ser mayor a 0."<<endl;
        }

    }while(precio <= 0);

    return precio;
}

int pedirCantidad(){

    int cantidad;

    do{
        cout<<"Cantidad de unidades: ";
        cin>>cantidad;

        if(cantidad <= 0){
            cout<<"[!] Error: La cantidad debe ser mayor a 0."<<endl;
        }

    }while(cantidad <= 0);

    return cantidad;
}

double calcularSubtotal(double precio, int cantidad){

    return precio * cantidad;
}

double ingresarProductos(int numProductos){

    double total = 0.0, precio, subtotal;
    int cantidad;

    for(int i = 1; i <= numProductos; i++){

        cout<<"--- Producto "<<i<<" de "<<numProductos<<" ---"<<endl;

        precio = pedirPrecio();
        cantidad = pedirCantidad();
        subtotal = calcularSubtotal(precio, cantidad);

        cout<<fixed<<setprecision(2);
        cout<<"  >> Subtotal: S/. "<<subtotal<<endl;

        total += subtotal; // total = total + subtotal
    }

    return total;
}

int pedirTipoCliente(){

    int tipo = 0;

    cout<<"--- Tipo de cliente ---"<<endl;
    cout<<"1. Normal (sin descuento)"<<endl;
    cout<<"2. Frecuente (10% descuento)"<<endl;
    cout<<"3. VIP (20% descuento)"<<endl;

    while(tipo < 1 || tipo > 3){

        cout<<"Elige el tipo de cliente (1, 2 o 3): ";
        cin>>tipo;

        if(tipo < 1 || tipo > 3){
            cout<<"[!] Error: Solo puedes ingresar 1, 2 o 3."<<endl;
        }
    }

    return tipo;
}

int obtenerDescuento(int tipoCliente){

    int porcentaje;

    switch(tipoCliente){
        case 1:
            porcentaje = 0;
            break;
        case 2:
            porcentaje = 10;
            break;
        case 3:
            porcentaje = 20;
            break;
        default:
            porcentaje = 0;
            break;
    }

    return porcentaje;
}

double aplicarDescuentoAdicional(double total){

    if(total > 200){
        cout<<"[*] El total supera los S/. 200, se aplica descuento adicional de S/. 15."<<endl;
        return 15.0;
    }else{
        return 0.0;
    }
}

void mostrarResumen(double total, int tipoCliente, int porcentaje, double descAdicional){

    double montoDescuento = total * (porcentaje / 100.0);
    // total = 300 y porcentaje = 10 => montoDescuento = 300 * 0.10 = 30

    double totalFinal = total - montoDescuento - descAdicional;

    string nombreTipo;

    if(tipoCliente == 1){
        nombreTipo = "Normal";
    }else if(tipoCliente == 2){
        nombreTipo = "Frecuente";
    }else{
        nombreTipo = "VIP";
    }

    cout<<fixed<<setprecision(2);
    cout<<"========================"<<endl;
    cout<<"  RESUMEN DE LA VENTA  "<<endl;
    cout<<"========================"<<endl;
    cout<<"Total bruto (sin descuento): S/. "<<total<<endl;
    cout<<"Tipo de cliente: "<<nombreTipo<<endl;
    cout<<"Descuento por tipo ("<<porcentaje<<"%): S/."<<montoDescuento<<endl;
    cout<<"Descuento adicional: S/. "<<descAdicional<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"TOTAL A PAGAR: S/. "<<totalFinal<<endl;
    cout<<"============================"<<endl;
}

int main() {

    int numProductos, tipoCliente, porcentaje;
    double total, descAdicional;

    cout<<"=========================================="<<endl;
    cout<<"  TIENDA DE DON PEPE - Sistema de Ventas  "<<endl;
    cout<<"=========================================="<<endl;

    numProductos = pedirNumProductos();
    total = ingresarProductos(numProductos);

    cout<<fixed<<setprecision(2);
    cout<<"  >> Total bruto acumulado: S/. "<<total<<endl;

    tipoCliente = pedirTipoCliente();

    porcentaje = obtenerDescuento(tipoCliente);

    descAdicional = aplicarDescuentoAdicional(total);

    mostrarResumen(total, tipoCliente, porcentaje, descAdicional);

    return 0;
}
