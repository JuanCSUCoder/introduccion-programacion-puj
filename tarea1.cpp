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
            cout << "El día ingresado es laborable y es ";
        } else if (dia > 7) {
            cout << "El día ingresado no es valido";
        } else {
            cout << "El día ingresado no es laborable y es ";
        }

        switch (dia)
        {
            case 1:
                cout << "Lunes";
                break;
            case 2:
                cout << "Martes";
            case 3:
                cout << "Miercoles";
            case 4:
                cout << "Jueves";
            case 5:
                cout << "Viernes";
            case 6:
                cout << "Sabado";
            case 7:
                cout << "Domingo";
            default:
                break;
        }

        cout << endl;

        activo = preguntaSiONo("Desea continuar?");
    }
    
    cout << "Finalizando" << endl;
    
    return 0;
}