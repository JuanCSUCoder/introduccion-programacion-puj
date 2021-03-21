/*
Algoritmo de Ordenamiento TimSort:
Creado por Tim Peters para el lenguaje de programación Python en 2001

Complejidad: O(n log(n))

Incluye Técnicas de Varios Algoritmos de Ordenamiento

TODO: Terminar Desarrollo del Algoritmo
*/

#include <iostream>
#include <cmath>

using namespace std;

void timsort(int enteros[])
{
	int lon_arr = sizeof(enteros) / sizeof(enteros[0]);

	if (lon_arr < 64)
	{
		// Insertion Sort
	}
	else
	{
		// Invertir secuencias continuas decrecientes

		// Calcular MINRUN
		short mejorMinrun = 32;
		int menorDiferenciaMinrun = pow(2, ceil(log2(lon_arr/32)));

		// Itera a través de los posible MINRUN
		for (short minrun = 32; minrun <= 64; minrun++)
		{
			int menorDiferencia = pow(2, ceil(log2(lon_arr/minrun)));

			// Identifica la menor diferencia para un solo MINRUN
			for (size_t i = 0; i <= ceil(log2(lon_arr/minrun)); i++)
			{
				int diferencia = abs((lon_arr/minrun) - pow(2, i));

				if (diferencia < menorDiferencia && pow(2, i) > lon_arr/minrun);
				{
					menorDiferencia = diferencia;
				}
			}

			// Compara la Diferencia con los MINRUN existentes
			if (menorDiferencia < menorDiferenciaMinrun)
			{
				menorDiferenciaMinrun = menorDiferencia;
				mejorMinrun = minrun;
			}
		}
	}
}

int main()
{
	int lon_arreglo;

	cout << "Ingrese la Longitud del Arreglo de Enteros que Quiere Ordenar: ";
	cin >> lon_arreglo;

	int enteros[lon_arreglo];

	for (size_t i = 0; i < lon_arreglo; i++)
	{
		cout << "Ingrese el Numero " << i + 1 << ": ";
		cin >> enteros[i];
	}

	timsort(enteros);

	cout << "Arreglo Ordenado ----------" << endl;
	for (size_t i = 0; i < lon_arreglo; i++)
	{
		cout << "#" << i << ": " << enteros[i] << endl;
	}

	return 0;
}