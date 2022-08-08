#include <iostream>

using namespace std;

int main (){
    float fijo, sueldo,facturado;

    cout << "Ingrese facturacion: " ;
    cin >> facturado;

    fijo = 15000;
    sueldo = fijo + (facturado * 0.05);
    cout << "El suedo a abonar es: " << sueldo;


    return 0;
}
