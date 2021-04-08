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
	srand(time(NULL));

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

int main()
{
	const int T = 100;
	int arreglo[T];
	int tam = 6;

	inicializarArreglo(arreglo, tam, 0);
	imprimirJuegoPropuesto(arreglo, tam);
	proponerJuego(arreglo, tam, 1, 43);
	imprimirJuegoPropuesto(arreglo, tam);

	return 0;
}