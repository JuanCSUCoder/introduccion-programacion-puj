/**
 * Tarea: Convertir el formato de fecha
 **/

#include <iostream>

using namespace std;

short int *obtenerDigitos(int numero)
{
    static short int d[8];

    for (short int i = 0; i < 8; i++)
    {
        d[i] = numero % 10;
        numero /= 10;
    }

    return d;
}

int obtenerMultiplicador(short int idx, short int longitud)
{
    int multiplicador = 1;
    for (short int i = 0; i < (longitud-idx-1); i++)
    {
        multiplicador *= 10;
    }
    return multiplicador;
}

int year(short int digitos[8])
{
    int valor = 0;
    for (short int i = 0; i < 4; i++)
    {
        valor += digitos[i]*obtenerMultiplicador(i,4);
    }
}

int month(short int digitos[8])
{
}

int day(short int digitos[8])
{
}

int main()
{
    int fecha;
    cout << "Escribe la fecha en el formato de 8 dígitos: ";
    cin >> fecha;

    short int *digitosApuntador;
    digitosApuntador = obtenerDigitos(fecha);

    cout << year(digitosApuntador) << endl;

    return 0;
}