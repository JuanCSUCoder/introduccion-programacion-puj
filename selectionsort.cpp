#include <iostream>

using namespace std;

int main()
{
	int long_arreglo;

	cout << "Ordenamiento Por Selección" << endl
			 << "# de Elementos a Ordenar: ";
	cin >> long_arreglo;

	int n[long_arreglo];

	cout << "Ingrese los Números Enteros a Ordenar" << endl;

	// Guardar Arreglo de Números a Ordenar
	for (size_t i = 0; i < long_arreglo; i++)
	{
		cout << "#" << i+1 << ": ";
		cin >> n[i];
	}
	

	return 0;
}