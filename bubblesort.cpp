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
		cout << "#" << i + 1 << ": ";
		cin >> n[i];
	}

	// Algoritmo
	for (size_t i = 1; i < long_arreglo; i++)
	{
		for (size_t j = 0; j < long_arreglo - i; j++)
		{
			if (n[j] > n[j + 1])
			{
				// Intercambiar
				n[j] += n[j + 1];
				n[j + 1] = n[j] - n[j + 1];
				n[j] -= n[j + 1];
			}
		}
	}

	// Imprimir Resultado
	cout << "Arreglo Ordenado -----------" << endl;
	for (size_t i = 0; i < long_arreglo; i++)
	{
		cout << "#" << i + 1 << ": " << n[i] << endl;
	}

	return 0;
}