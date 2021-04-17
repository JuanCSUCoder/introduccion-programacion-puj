#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int randEntre(int desde, int hasta)
{
	return rand() % (hasta - desde + 1) + desde;
}

void inicializarMatriz100x100Aleatoria(int matriz[100][100], int desde, int hasta)
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			matriz[i][j] = randEntre(desde, hasta);
		}
	}
}

void sumarMatrices100x100(int matriz1[100][100], int matriz2[100][100], int resultado[100][100])
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			resultado[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}
}

void imprimirMatriz(int matriz[100][100], int desde_fila, int hasta_fila, int desde_columna, int hasta_columna)
{
	for (int i = desde_fila - 1; i < hasta_fila; i++)
	{
		for (int j = desde_columna - 1; j < hasta_columna; j++)
		{
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	// Inicializar Semilla Aleatoria
	srand(time(NULL));

	// Matrices
	int matriz1[100][100];
	int matriz2[100][100];

	inicializarMatriz100x100Aleatoria(matriz1, 0, 82);
	inicializarMatriz100x100Aleatoria(matriz2, 22, 89);

	int resultado[100][100];

	sumarMatrices100x100(matriz1, matriz2, resultado);

	imprimirMatriz(resultado, 1, 10, 1, 10);

	return 0;
}