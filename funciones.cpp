#include <iostream>

using namespace std;

bool esPrimo(int);

int main()
{
    int num;

    cout << "Ingrese un número: ";
    cin >> num;

    bool primo = esPrimo(num);

    if (primo)
    {
        cout << "El número es primo" << endl;
    }
    else
    {
        cout << "El número no es primo" << endl;
    }

    return 0;
}

bool esPrimo(int n)
{
    bool resultado = true;
    for (int i = 2; i < (n / 2) + 1; i++)
    {
        if (n % i == 0)
        {
            resultado = false;
        }
    }

    return resultado;
}