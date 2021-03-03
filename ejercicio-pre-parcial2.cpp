/**
 * Poblaciones de Hormigas:
 * Rojas (A)
 * Enanas (B)
 * 
 * Crecimiento de A > Crecimiento de B
 * 
 * Entradas:
 *  - Cantidad de Hormigas
 *  - Tasa de Crecimiento Mensual
 * 
 * Salidas:
 *  - Tiempo en Meses en el que la población A será mayor a B
 * 
 * Condiciones:
 *  - > 20.000 hormigas => Crecimiento *= 0.5
**/

#include <iostream>

using namespace std;

int main()
{
    // Cantidad de Hormigas de Cada Grupo
    unsigned int A, B;

    // Tasa de Crecimiento Mensual de Cada Grupo (0%-100%)
    float tA, tB;

    unsigned int meses = 0;

    // Capturar Datos
    cout << "Población de Hormigas Rojas (A)" << endl;
    cout << "Población: ";
    cin >> A;

    cout << "Tasa de Crecimiento (0%-100%): ";
    cin >> tA;

    cout << "Población de Hormigas Enanas (B)" << endl;
    cout << "Población: ";
    cin >> B;

    cout << "Tasa de Crecimiento (0%-100%): ";
    cin >> tB;

    while (A < B)
    {
        if (A <= 20000)
        {
            A *= (tA/100)+1;
        } else {
            A *= (tA/200)+1;
        }

        if (B <= 20000)
        {
            B *= (tB/100)+1;
        } else {
            B *= (tB/200)+1;
        }
        meses++;
    }

    // Mostrar el resultado del tiempo acumulado
    cout << "Meses en que A superará a B: " << meses << endl;
    cout << "Poblaciones Finales -------------" << endl;
    cout << "Población A: " << A << endl;
    cout << "Población B: " << B << endl;

    return 0;
}