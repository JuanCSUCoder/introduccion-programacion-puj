#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    cout << "Inicializando con semilla aleatoria ..." << endl;
    srand(time(NULL));

    cout << "Simulando lanzamiento de un dado ...." << endl;
    int resultado = rand() % 6 + 1;

    cout << "En el dado salió: " << resultado << endl;

    return 0;
}