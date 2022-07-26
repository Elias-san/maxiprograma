/*


*/


#include <iostream>

using namespace std;

int main(){

        int km,velocidad;

        cout <<"Ingrese kilometros entre ciudades: ";
        cin >> km;
        cout << "Ingrese velocidad promedio: ";
        cin >> velocidad;
        cout << "El tiempo de llegada es: " << km / velocidad << " hs ";
        return 0;
}
