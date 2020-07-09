#include <iostream>
#include <string>
using namespace std;
int main(){
    int factura, codigoproducto, cantidaddetalles=0;
    double precio, rtn,  cantidad, subtotaldetalle=0, subtotal=0, descuento=0, isv=0, totalpagar=0;
    string cliente, producto;
    const double PORCENTAJEDESCUENTO = 0.05;
    const double PORCENTAJEISV = 0.015;
    cout << "Introduzca la factura: ";
    cin >> factura;
    cout << "Introduzca el cliente: ";
    cin >> cliente;
    cout << "cuantos productos lleva?: ";
    cin >> cantidaddetalles;
    for (int i = 0; i < cantidaddetalles; i++)
    {
        cout <<"RTN: ";
        cin >> rtn;
        cout << "Introduzca el codigo producto: ";
        cin >> codigoproducto;
        cout << "Introduzca el producto: ";
        cin >> producto;
        cout << "Introduzca la cantidad: ";
        cin >> cantidad;
        cout << "Introduzca el precio: ";
        cin >> precio;
        subtotaldetalle=(cantidad*precio);
        cout << "El Subtotal del detalle es: " <<subtotaldetalle << endl;
        subtotal+=subtotaldetalle;
    }
    descuento=subtotal * PORCENTAJEDESCUENTO;
    isv = subtotal * PORCENTAJEISV;
    totalpagar = subtotal - descuento + isv;
    cout << "El subtotal es: "<< subtotal << endl;
    cout << "El descuento es: "<< descuento << endl;
    cout << "El ISV es: "<< isv << endl;
    cout << "El total a pagar es: " << totalpagar << endl; // muestra el total a pagar de los productos

    return 0;
}