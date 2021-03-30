// Investigar que es busqueda binaria
#include <iostream>

/*
Busqueda Binaria:
	Entrada:
		- Arreglo Ordenado
		- Elemento a Buscar
	Salida:
		- Posición donde se ubica el elemento
	Complejidad:
		O(Log n)
	
	Función Recursiva
		Entrada:
			- Arreglo Ordenado
			- Posición Inicial
			- Última Posición del Arreglo
			- Valor a Buscar
		Salida:
			- Posición donde se ubica el elemento

	
*/

using namespace std;

int busquedaBinaria(int arr[], int inicial, int final, int a_buscar)
{
	int medio = inicial + ((final - inicial) / 2);

	if (final >= inicial)
	{
		if (arr[medio] == a_buscar)
		{
			return medio;
		}
		else if (arr[medio] < a_buscar)
		{
			return busquedaBinaria(arr, medio+1, final, a_buscar);
		}
		else
		{
			return busquedaBinaria(arr, inicial, medio-1, a_buscar);
		}
	}
	else
	{
		return -1;
	}
}

int main()
{
	int longitud, buscar, posicion;

	cout << "Cantidad de Números: ";
	cin >> longitud;

	int numeros[longitud];

	for (size_t i = 0; i < longitud; i++)
	{
		cout << "#" << i + 1 << ": ";
		cin >> numeros[i];
	}

	cout << "Número a Buscar: ";
	cin >> buscar;

	posicion = busquedaBinaria(numeros, 0, longitud - 1, buscar);

	if (posicion == -1)
	{
		cout << "No se encontró el valor especificado :(" << endl;
	}
	else
	{
		cout << "El número se encontró en la posición " << posicion << endl;
	}

	return 0;
}