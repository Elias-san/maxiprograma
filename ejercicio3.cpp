/*
3. Hacer	un	programa	que	permita	ingresar	el	año	actual	y	el	año	de	la	fecha	de
nacimiento	de	una	persona	y	luego	calcule	y	emita	por	pantalla	su	edad.
Nota:	no	hay	que	tener	en	cuenta	si	la	persona	cumplió	años	o	no,
simplemente	calcular


*/


#include <iostream>

using namespace std;

int main(){
    int year,born_year;
    cout << "Ingrese año actual:";
    cin >> year;

    cout << "Ingrese año de nacimiento:";
    cin >> born_year;

    cout << "La edad es: " << year - born_year ;
    return 0;
}
