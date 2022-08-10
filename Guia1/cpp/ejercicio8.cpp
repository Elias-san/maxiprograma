#include <iostream>

using namespace std;

int main(){

    float importe, total;

    cout << "Ingrese importe a cobrar: ";
    cin >> importe;

    total = importe * 0.85;
    cout << "El importe con descuento es: "<< total << endl;

    return 0;
}