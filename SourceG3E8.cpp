/*

Hacer un programa para ingresar una lista de 10 números,
luego informar el porcentaje de positivos, negativos, y  ceros.


*/

#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL,"es_ES.UTF-8");

    int nroIngresado;
    int contNegativos = 0;
    int contPositivos = 0;
    int contCeros = 0;

    cout << "Ingrese 10 números: " << endl;

    for ( int i = 0 ; i < 10 ; i++ ) {
         cin >> nroIngresado;
         if ( nroIngresado > 0 ) {
            contPositivos++;
         }
         else if ( nroIngresado < 0 ) {
            contNegativos++;
         }
         else {
            contCeros++;
         }
    }
    cout << endl;
    cout << "Porcentaje de positivos: " << (contPositivos * 100) / 10 << "%" << endl;
    cout << "Porcentaje de negativos: " << (contNegativos * 100) / 10 << "%" << endl;
    cout << "Porcentaje de ceros: " << (contCeros * 100) / 10 << "%";
    cout << endl;
    return 0;
}
