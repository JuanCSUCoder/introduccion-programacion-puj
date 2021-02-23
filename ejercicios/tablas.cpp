// Tablas de multiplicar del 1 al 10
#include <iostream>

using namespace std;

int main()
{
    for (unsigned short int i = 1; i <= 10; i++)
    {
        cout << endl
             << "Tabla de Multiplicar del " << i << endl;
        for (unsigned short int j = 1; j <= 10; j++)
        {
            cout << i << "x" << j << "=" << i * j << endl;
        }
        cout << endl;
    }

    return 0;
}