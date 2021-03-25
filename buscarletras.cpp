#include <iostream>

using namespace std;

int buscarLetra(char letra, char cadena[])
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

int localizarLetra(int orden, char letra, char cadena[])
{
	int posicion = -1;
	bool encontrado = false;

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

void imprimirEnPosiciones(char letraAImprimir, int posiciones[], int cant_posic)
{
	unsigned int posicion_max = 0;

	for (size_t i = 0; i < cant_posic; i++)
	{
		if (posiciones[i] > posicion_max)
		{
			posicion_max = posiciones[i];
		}
	}

	for (size_t i = 0; i < posicion_max + 1; i++)
	{
		bool encontrado = false;

		for (size_t j = 0; j < cant_posic; j++)
		{
			if (posiciones[j] == i)
			{
				encontrado = true;
			}
		}

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

int main()
{
	char cadena[30];

	cout << "Cadena de Texto (máximo 30 caracteres): ";
	cin >> cadena;

	char letra_a_buscar;

	cout << "Letra a Buscar: ";
	cin >> letra_a_buscar;

	int coincidencias = buscarLetra(letra_a_buscar, cadena);

	cout << "Se ha encontrado la letra " << coincidencias << " veces" << endl;
	cout << "En las posiciones: " << cadena << endl;

	int posiciones[coincidencias];

	for (size_t i = 1; i <= coincidencias; i++)
	{
		posiciones[i - 1] = localizarLetra(i, letra_a_buscar, cadena);
	}

	cout << "                   ";

	imprimirEnPosiciones('^', posiciones, coincidencias);

	cout << endl;

	return 0;
}