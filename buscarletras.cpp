#include <iostream>

using namespace std;

unsigned int buscarLetra(char letra, char cadena[])
{
	int acumulado = 0;

	for (size_t i = 0; cadena[i] != '\0'; i++)
	{
		if (cadena[i] == letra)
		{
			acumulado++;
		}
	}

	return acumulado;
}

unsigned int localizarLetra(int orden, char letra, char cadena[])
{
	int posicion = -1;
	bool encontrado = false;

	// Recorrer la cadena de caracteres hasta la coincidencia # [orden]
	for (size_t i = 0; cadena[i] != '\0' && !encontrado; i++)
	{
		if (cadena[i] == letra)
		{
			orden--;
		}

		if (orden == 0)
		{
			posicion = i;
			encontrado = true;
		}
	}

	return posicion;
}

void imprimirEnPosiciones(char letraAImprimir, unsigned int posiciones[], unsigned int cant_posic)
{
	unsigned int posicion_max = 0;

	// Hallar posicion de mayor índice
	for (size_t i = 0; i < cant_posic; i++)
	{
		if (posiciones[i] > posicion_max)
		{
			posicion_max = posiciones[i];
		}
	}

	// Imprimir la letraAImprimir o un " " uno por uno
	for (size_t i = 0; i < posicion_max + 1; i++)
	{
		bool encontrado = false;

		// Determinar si el caracter próximo a imprimir coincide con una posicion en el arreglo posiciones
		for (size_t j = 0; j < cant_posic; j++)
		{
			if (posiciones[j] == i)
			{
				encontrado = true;
			}
		}

		// Imprime letraAImprimir si coincide con una posicion en posiciones, en caso contrario imprime un espacio
		if (encontrado)
		{
			cout << letraAImprimir;
		}
		else
		{
			cout << " ";
		}
	}
}

void reemplazarEnPosiciones(char cadena[], unsigned int posiciones[], unsigned int coincidencias, char letra)
{
	for (size_t i = 0; cadena[i] != '\0'; i++)
	{
		bool reemplazar = false;

		for (size_t j = 0; j < coincidencias; j++)
		{
			if (posiciones[j] == i)
			{
				reemplazar = true;
			}
		}

		if (reemplazar)
		{
			cadena[i] = letra;
		}
	}
}

int main()
{
	// Declarar Variables
	char cadena[30];
	char letra_a_buscar;

	// Entrada de Datos
	cout << "Cadena de Texto (máximo 30 caracteres): ";
	cin >> cadena;

	cout << "Letra a Buscar: ";
	cin >> letra_a_buscar;

	// Numero de Veces que se  Encontró la Letra Indicada
	unsigned int coincidencias = buscarLetra(letra_a_buscar, cadena);

	// Primera parte de la salida
	cout << "Encontrada " << coincidencias << " veces en: " << cadena << endl;

	// Declarar Arreglo de Posiciones con el Tamaño Necesario
	unsigned int posiciones[coincidencias];

	// Alamcenar las posiciones en el arreglo
	for (size_t i = 1; i <= coincidencias; i++)
	{
		posiciones[i - 1] = localizarLetra(i, letra_a_buscar, cadena);
	}

	// Imprimir Ajuste de los Caracteres
	cout << "           "
			 << "            ";

	// Imprimir ^ en las posiciones del arreglo
	imprimirEnPosiciones('^', posiciones, coincidencias);

	// Terminar con un salto de línea
	cout << endl;

	/*
		Hacer una función que cambie los caracteres en las posiciones seleccionadas
	*/

	char reemplazo;

	cout << "Caracter de Reemplazo: ";
	cin >> reemplazo;

	reemplazarEnPosiciones(cadena, posiciones, coincidencias, reemplazo);

	cout << "Cadena Modificada: " << cadena << endl;

	return 0;
}