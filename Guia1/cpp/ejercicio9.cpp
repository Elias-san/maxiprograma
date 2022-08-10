#include <iostream>

using namespace std;

int main(){

    int mujeres,hombres,total;

    cout << "Ingrese cantidad de mujeres: ";
    cin >> mujeres;
    cout << "Ingrese cantidad de hombres: ";
    cin >> hombres;
    total = mujeres + hombres;

    cout << "El porcentaje de mujeres es: " << (mujeres * 100) / total << " % " << endl;
    cout << "El porcentaje de hombres es: " << (hombres * 100) / total << " % " << endl;

    return 0;
}