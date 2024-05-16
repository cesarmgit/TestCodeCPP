/*Hacer un programa para que el usuario ingrese un número positivo y que luego
se muestre por pantalla los números entre el 1 y el número ingresado por el usuario.
Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.

*/

#include <iostream>

using namespace std;

int main() {

    int nroIngresado;

    cout << "Ingrese número:" << endl;
    cin >> nroIngresado;
    cout << endl;

    for( int i=1 ; i<=nroIngresado ; i++ ) {
        cout << i << endl;
    }
    return 0;
}
