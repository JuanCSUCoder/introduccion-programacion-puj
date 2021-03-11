#include <iostream>
#include <cstdlib>
#include <time.h>

// https://www.cplusplus.com/reference/cstdlib/rand

/**
 * En los computadores no existe una forma de escojer algún número aleatorio, 
 * por lo que se usna números pseudoaleatorio
**/

using namespace std;

int main()
{
    cout << "Inicializando con semilla aleatoria ..." << endl;
    srand(time(NULL));

    int v1 = rand() % 100;       // v1 in the range 0 to 99
    int v2 = rand() % 100 + 1;   // v2 in the range 1 to 100
    int v3 = rand() % 30 + 1985; // v3 in the range 1985-2014

    cout << v1 << '\t' << v2 << '\t' << v3 << endl;

    return 0;
}