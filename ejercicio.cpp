#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;
    cout << "Ingrese un número: ";
    cin >> x;

    int suma = 0;

    while (x!=0) {
        suma += x%10;
        x = x/10;
    }

    cout << "Suma de digitos: " << suma << endl;

    return 0;
}