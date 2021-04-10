// https://sophia.javeriana.edu.co/programacion/sites/default/files/pdfParciales/2018-30-PensamientoAlgoritmico-2.pdf
// Progresiones Matemáticas
/*
Se necesita:
	- void progresionAritmetica(int vec[], int inicio, int factor, int tam)
	- void progresionGeometrica(int vec[], int inicio, int factor, int tam)
	- void progresionesIntercaladas(int vec[], int inicio, int factor, int tam) // Debe hacer uso de las funciones anteriores
*/

#include <iostream>

using namespace std;

void imprimirProgresion(int progresion[], int tam)
{
	for (short i = 0; i < tam; i++)
	{
		cout << progresion[i];
		if (i < tam - 1)
		{
			cout << ", ";
		}
	}
	cout << endl;
}

void progresionAritmetica(int vec[], int inicio, int factor, int tam)
{
	for (short i = 0; i < tam; i++)
	{
		if (i == 0)
		{
			vec[0] = inicio;
		}
		else
		{
			vec[i] = vec[i - 1] + factor;
		}
	}
}

void progresionGeometrica(int vec[], int inicio, int factor, int tam)
{
	for (short i = 0; i < tam; i++)
	{
		if (i == 0)
		{
			vec[0] = inicio;
		}
		else
		{
			vec[i] = vec[i - 1] * factor;
		}
	}
}

void progresionesIntercaladas(int vec[], int inicio, int factor, int tam)
{
	int progAritm[tam];
	int progGeome[tam];

	// Generar ambas progresiones
	progresionAritmetica(progAritm, inicio, factor, tam);
	progresionGeometrica(progGeome, inicio, factor, tam);

	for (short i = 0; i < tam; i++)
	{
		vec[i * 2] = progAritm[i];
		vec[i * 2 + 1] = progGeome[i];
	}
}

int main()
{
	int tam = 5;
	int vec[tam];
	int intercalado[tam * 2];

	progresionAritmetica(vec, 2, 4, tam);
	imprimirProgresion(vec, tam);

	progresionGeometrica(vec, 2, 4, tam);
	imprimirProgresion(vec, tam);

	progresionesIntercaladas(intercalado, 2, 4, tam);
	imprimirProgresion(intercalado, tam * 2);

	return 0;
}