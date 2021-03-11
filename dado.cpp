#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int lanzarDado() {
	return rand() % 6 + 1;
}

int main()
{
	cout << "Inicializando con semilla aleatoria ..." << endl;
	srand(time(NULL));

	int cont3 = 0;
	int estadoDado;

	for (int i = 0; i < 1000000; i++)
	{
		estadoDado = lanzarDado();
		cout << "Simulación " << i + 1 << endl;
		cout << "En el dado salió: " << estadoDado << endl;

		if (estadoDado == 3)
		{
			cont3++;
		}
	}
	
	cout << "El valor 3 salió " << cont3 << "veces" << endl;

	return 0;
}