#include <iostream>

using namespace std;

/**
 * Aclaración:
 * Soluciona el "Ejercicio 1" para una cantidad indefinida de números, no para 5 números como se indicó en la clase
 **/

int main()
{
    cout << "Ingrese una secuencia de números a continuación y escriba 0 para terminar" << endl;

    int ultimo = 1;
    int numeros = 0;

    int mayor;
    int menor;

    bool mayor_definido = false;
    bool menor_definido = false;

    bool hay_numeros = false;

    int num_mayores_de_100 = 0;
    int num_negativos = 0;

    int acumulado = 0;

    double promedio;

    while (ultimo != 0)
    {
        cout << "> ";
        cin >> ultimo;

        if (ultimo != 0)
        {
            hay_numeros = true;
            numeros++;

            if (ultimo > mayor || !mayor_definido)
            {
                mayor = ultimo;
                mayor_definido = true;
            }

            if (ultimo < menor || !menor_definido)
            {
                menor = ultimo;
                menor_definido = true;
            }

            if (ultimo > 100)
            {
                num_mayores_de_100++;
            }

            if (ultimo < 0)
            {
                num_negativos++;
            }

            acumulado += ultimo;
        }
    }

    if (hay_numeros) {
        promedio = acumulado / numeros;

        cout << "Resultados ---------------------------" << endl;
        cout << "Numero Mayor: " << mayor << endl;
        cout << "Número Menor: " << menor << endl;
        cout << "Cantidad de Números Mayores a 100: " << num_mayores_de_100 << endl;
        cout << "Cantidad de Números Negativos: " << num_negativos << endl;
        cout << "Promedio: " << promedio << endl;
    } else {
        cout << "No hay números" << endl;
    }

    return 0;
}