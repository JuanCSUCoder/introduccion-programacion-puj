/**
 * Taller 2 - Introducción a la Programación
 * Juan Camilo Sánchez Urrego
 * 
 * Turnos: 10
 * Tiros por Turno: 2
 * 
 * Es posible que en el último turno se puedan tener 3
 * 
 * Moñona: 10 + Próximos 2 Tiros
 * Media: 10 + Próximo Tiro
 * 
 * Ultimo Turno:
 *  - Moñona: + 2 Tiros
 *  - Media: + 1 Tiro
 * En total el último turno quedaría en 2 o en 3 tiros en caso de que haga moñona o media
**/

#include <iostream>

using namespace std;

int main()
{
    // Mensaje de Bienvenida
    cout << "Programa de Puntaje del Juego de Bolos (Individual) --------" << endl
         << endl
         << "\t Taller 2 - Introducción a la Programación" << endl
         << "\t Juan Camilo Sánchez Urrego" << endl
         << endl;

    // Variables de Conteo del Puntaje Total
    int acumuladoBasico = 0, acumuladoAdicional = 0, tirosDeAdicion = 0;

    // Turnos de 0-9
    for (short int i = 0; i < 10; i++)
    {
        cout << "Turno " << i + 1 << " ----------------------------------------------------" << endl;

        // Si no es el último turno
        if (i < 9)
        {
            // Variable de Control
            bool terminado = false;

            // Acumulador de Tiros del Turno
            short int tiros = 0;

            // Tiros
            for (short int j = 0; j < 2 && !terminado; j++)
            {
                cout << "Tiro " << j + 1 << ": ";

                short int tiro;
                cin >> tiro;

                tiros += tiro;

                // Si se necesitan adicionar puntos por Moñonas o Medias
                if (tirosDeAdicion > 0)
                {
                    acumuladoAdicional += tiro;
                    tirosDeAdicion--;
                }

                // Si hace Moñona o Media
                if (tiros > 9)
                {
                    // Si hace moñona
                    if (j == 0)
                    {
                        tirosDeAdicion += 2;
                        terminado = true;
                    }
                    else // Si hace media
                    {
                        tirosDeAdicion += 1;
                    }
                }
            }

            // Acumula Puntos Normales
            acumuladoBasico += tiros;
        }
        else // Si es la última ronda
        {
            // Variables de Control
            bool continuar = false;
            short int j = 1;

            // Acumulador del Turno
            short int tiros = 0;

            // Tiros
            while ((continuar && j < 4) || j < 3)
            {
                cout << "Tiro " << j << ": ";

                short int tiro;
                cin >> tiro;

                tiros += tiro;

                // En caso de Moñona o Media habilitar hasta 3 tiros con Variable de Control "continuar"
                if (tiros > 9)
                {
                    continuar = true;
                }

                // Completar los puntos adicionales restantes
                if (tirosDeAdicion > 0)
                {
                    acumuladoAdicional += tiro;
                    tirosDeAdicion--;
                }

                j++;
            }

            acumuladoBasico += tiros;
        }

        if (i < 9)
        {
            cout << "Puntaje Actual: " << acumuladoBasico + acumuladoAdicional << endl
                 << "------------------------------------------------------------" << endl;
        }
    }

    cout << "Puntaje Final: " << acumuladoBasico + acumuladoAdicional << endl;

    return 0;
}