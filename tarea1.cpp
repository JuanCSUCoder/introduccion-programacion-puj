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

int main() {
    int dia;
    bool activo = true;

    while (activo)
    {
        cout << "Ingrese un número del día de la semana: ";
        cin >> dia;

        if (1 <= dia && dia <= 5) {
            cout << "El día ingresado es laborable" << endl;
        } else if (dia > 7) {
            cout << "El día ingresado no es valido" << endl;
        } else {
            cout << "El día ingresado no es laborable" << endl;
        }

        activo = preguntaSiONo("Desea continuar?");
    }
    
    cout << "Finalizando" << endl;
    
    return 0;
}