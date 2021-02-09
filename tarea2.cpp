/**
 * Tarea: Completar el ejercicio y decir cuantos dígitos son pares y cuantos impares + Ejercicio 4 en Apuntes
**/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;
    cout << "Ingrese un número: ";
    cin >> x;

    int suma = 0;
    short int digito;
    int pares = 0, impares = 0;

    while (x!=0) {
        digito = x%10;
        suma += digito;
        if (digito%2==1){
            impares++;
        }else{
            pares++;
        }
        x = x/10;
    }

    cout << "Suma de digitos: " << suma << endl;
    cout << "# de Pares: " << pares << endl;
    cout << "# de Impares: " << impares << endl;

    return 0;
}