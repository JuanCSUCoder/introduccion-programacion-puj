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
	
	// Algoritmo
	for (size_t i = 0; i < long_arreglo; i++)
	{
		for (size_t j = i + 1; j < long_arreglo; j++)
		{
			if (n[j] > n[i])
			{
				// Intercambiar
				n[j] += n[i];
				n[i] = n[j] - n[i];
				n[j] -= n[i];
			}
		}
	}

	// Imprimir Resultado
	cout << "Arreglo Ordenado -----------" << endl;
	for (size_t i = 0; i < long_arreglo; i++)
	{
		cout << "#" << i+1 << ": " << n[i] << endl;
	}
	
	

	return 0;
}