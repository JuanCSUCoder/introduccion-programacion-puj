#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int lanzarDado() {
	return rand() % 6 + 1;
}

int main()
{
	cout << "Inicializando con semilla aleatoria ..." << endl;
	srand(time(NULL));

	for (int i = 0; i < 1000000; i++)
	{
		cout << "Simulación " << i + 1 << endl;
		cout << "En el dado salió: " << lanzarDado() << endl;
	}

	return 0;
}