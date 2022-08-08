#include <iostream>


using namespace std;

int main(){
    float nota1,nota2,nota3,promedio;

    cout << "Ingrese primer nota: ";
    cin >> nota1;
    cout << "Ingrese segunda nota: ";
    cin >> nota2;
    cout << "Ingrese tercer nota: ";
    cin >> nota3;

    promedio = (nota1 + nota2 + nota3)/3;
    cout << "El promedio de las notas es: " << promedio;

    return 0;
}
