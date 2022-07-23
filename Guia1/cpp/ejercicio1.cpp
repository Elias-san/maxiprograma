/*
2. Hacer	un	programa	para	solicitar	por	teclado	un	número	y	luego devolver	su
valor	elevado	al	cubo.
Nota:	no	olvides	que	sólo	contamos	con	las	cuatro	operaciones	básicas.


*/


#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    cout << "El cubo de " << num << " es: "
        << num * num * num;
    return 0;
}
