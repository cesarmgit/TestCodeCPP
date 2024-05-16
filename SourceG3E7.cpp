/*

Hacer un programa para ingresar una lista de 10 números, luego informar
cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.

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
    cout << "Cantidad de positivos: " << contPositivos << endl;
    cout << "Cantidad de negativos: " << contNegativos << endl;
    cout << "Cantidad de ceros: " << contCeros;
    cout << endl;
    return 0;
}
