// Día laborable del 1 al 5 incluyendo
#include <iostream>

using namespace std;

bool preguntaSiONo(string pregunta)
{
    string respuesta;
    bool resultado;
    bool valida = false;

    while (!valida)
    {
        cout << pregunta << " (s/n): ";
        cin >> respuesta;

        if (respuesta == "s" || respuesta == "S")
        {
            valida = true;
            resultado = true;
        }
        else
        {
            if (respuesta == "n" || respuesta == "N")
            {
                valida = true;
                resultado = false;
            }
        }
        if (!valida)
        {
            cout << "De una respuesta valida por favor" << endl;
        }
    }

    return resultado;
}

int main()
{
    int dia;
    bool activo = true;
    string dias[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

    while (activo)
    {
        // Preguntar Día
        cout << "Ingrese un número del día de la semana: ";
        cin >> dia;

        // Determinar si es laborable
        if (1 <= dia && dia <= 5)
        {
            cout << "El día ingresado es laborable y es ";
        }
        else if (dia > 7)
        {
            cout << "El día ingresado no es valido";
        }
        else
        {
            cout << "El día ingresado no es laborable y es ";
        }

        if (dia <= 7) {
            // Imprimir nombre del día día
            cout << dias[dia-1] << endl;
        }

        // Preguntar si se desea seguir usando el programa
        activo = preguntaSiONo("Desea continuar?");
    }

    cout << "Finalizando" << endl;

    return 0;
}