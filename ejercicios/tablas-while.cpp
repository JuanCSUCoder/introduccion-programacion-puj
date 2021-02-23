// Tablas de multiplicar del 1 al 10
#include <iostream>

using namespace std;

int main()
{
    unsigned short int i = 1; 
    while (i <= 10)
    {
        cout << endl
             << "Tabla de Multiplicar del " << i << endl;

        unsigned short int j = 1;
        while (j <= 10)
        {
            cout << i << "x" << j << "=" << i * j << endl;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}