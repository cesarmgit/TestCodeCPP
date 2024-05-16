/*

Hacer un programa para que el usuario ingrese dos números y luego
el programa muestre por pantalla los números entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el
15; y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.

*/

#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL,"es_ES.UTF-8");

    int nroInicio;
    int nroFin;
    int varAuxiliar;

    cout << "Ingrese número inicio:" << endl;
    cin >> nroInicio;
    cout << endl;
    cout << "Ingrese número fin:" << endl;
    cin >> nroFin;
    cout << endl;

    if (nroInicio > nroFin) {
         varAuxiliar = nroFin;
         nroFin = nroInicio;
         nroInicio = varAuxiliar;
    }

    for ( int i = nroInicio ; i <= nroFin ; i++ ) {
         cout << i << endl;
        }

    cout << endl;
    return 0;
}
