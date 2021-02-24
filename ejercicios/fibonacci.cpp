#include <iostream>

using namespace std;

unsigned int fibo(unsigned int n)
{
    unsigned int respuesta;

    if (n == 0)
    {
        respuesta = 0;
    }
    else if (n == 1)
    {
        respuesta = 1;
    }
    else
    {
        respuesta = fibo(n-1) + fibo(n-2);
    }

    cout << "Para: " << n << "\tEs: " << respuesta << endl;

    return respuesta;
}

int main()
{
    unsigned int n;
    cout << "Obtener número Fibonacci n: ";
    cin >> n;

    cout << "Numero: " << fibo(n-1) << endl;

    return 0;
}