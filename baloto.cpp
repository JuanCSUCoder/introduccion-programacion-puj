#include <iostream>
#include <cstdlib> // rand();
#include <time.h>	 // time();

using namespace std;

void inicializarArreglo(int vec[], int t, int valor)
{
	for (int i = 0; i < t; i++)
	{
		vec[i] = valor;
	}
}

void imprimirJuegoPropuesto(int vec[], int tama)
{
	cout << "Juego Propuesto --------------" << endl;

	for (size_t i = 0; i < tama; i++)
	{
		if (i < tama - 1)
		{
			cout << vec[i] << ", ";
		}
		else
		{
			cout << vec[i] << endl;
		}
	}
}

bool existeEnElArreglo(int arr[], int tam, int a_buscar)
{
	bool existe = false;

	for (size_t i = 0; i < tam; i++)
	{
		if (a_buscar == arr[i])
		{
			existe = true;
		}
	}

	return existe;
}

void proponerJuego(int arr[], int tam, int desde, int hasta)
{
	for (size_t i = 0; i < tam; i++)
	{
		bool se_repite = true;
		int candidato;

		while (se_repite)
		{
			candidato = rand() % (hasta - desde + 1) + desde;

			se_repite = existeEnElArreglo(arr, tam, candidato);
		}

		arr[i] = candidato;
	}
}

void ordenarArreglo(int arr[], int tam) {
		for (size_t i = 0; i < tam; i++)
		{
			for (size_t j = i + 1; j < tam; j++)
			{
				if (arr[j] < arr[i])
				{
					// Intercambiar
					arr[j] += arr[i];
					arr[i] = arr[j] - arr[i];
					arr[j] -= arr[i];
				}
			}
		}
		
}

int main()
{
	const int T = 100;
	int arreglo[T];
	int tam = 6;

	srand(time(NULL));

	inicializarArreglo(arreglo, tam, 0);
	imprimirJuegoPropuesto(arreglo, tam);

	proponerJuego(arreglo, tam, 1, 43);
	imprimirJuegoPropuesto(arreglo, tam);

	ordenarArreglo(arreglo, tam);
	imprimirJuegoPropuesto(arreglo, tam);

	return 0;
}