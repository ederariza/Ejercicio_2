/*
Ejercicio 2. Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
Ej: si se ingresa 5 se debe imprimir:
5 es impa
 */

#include <iostream>

using namespace std;

int main(){

    int A, B;
    cout<< "Ingrese el numero A: ";
    cin>> A;
    B = A % 2;

    if(B == 1){
        cout << A << " es impar" << endl;
    }

    else{
            cout << A << " es par" << endl;
   }

    return 0;
}
