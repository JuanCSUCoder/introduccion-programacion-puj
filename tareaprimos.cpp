#include <iostream>

using namespace std;

int main()
{
    bool activo = true;
    while (activo)
    {
        cout << "Ingrese un número entero o 0 para terminar: ";

        int numero;
        cin >> numero;

        if (numero != 0)
        {
            if (numero > 1 || numero < -1)
            {
                bool par_encontrado = false;
                for (int i = 2; i <= numero/2 && !par_encontrado; i++)
                {
                    if (numero % i == 0)
                    {
                        cout << "El numero " << numero << " no es primo, pues " << i << "x" << numero / i << "=" << numero << endl;
                        par_encontrado = true;
                    }
                }
                if (!par_encontrado)
                {
                    cout << "El numero " << numero << " es primo" << endl;
                }
            }
            else
            {
                cout << "El numero " << numero << " no es primo ni compuesto" << endl;
            }
        }
        else
        {
            cout << "Finalizando ..." << endl;
            activo = false;
        }
    }

    return 0;
}