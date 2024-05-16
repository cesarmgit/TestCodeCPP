/*

Hacer un programa para ingresar un N valor que indica la cantidad de números
que componen una lista y luego solicitar se ingresen esos N números.
Se pide informar cuantos son positivos
Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará:  Cantidad de Positivos: 4
Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará: Cantidad de Positivos: 0


*/

#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL,"es_ES.UTF-8");

    int nroIngresado;
    int nroIngresadoLista;
    int contPositivos;

    cout << "Ingrese cantidad de números de la lista:" << endl;
    cin >> nroIngresado;
    cout << endl;

    for ( int i = 0 ; i < nroIngresado ; i++ ) {
         cin >> nroIngresadoLista;
         if ( nroIngresadoLista > 0 ) {
            contPositivos++;
         }

    }
    cout << "Cantidad de positivos: " << contPositivos;
    cout << endl;
    return 0;
}
