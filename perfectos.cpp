// Tarea: Hacer un programa que busque los números perfectos que existen entre dos valores dados
#include <iostream>

using namespace std;

bool esDivisor(int divisor, int dividendo)
{
	return (dividendo % divisor) == 0;
}

int sumaDivisores(int n)
{
	int acumulado = 0;

	for (size_t i = 1; i < (n / 2) + 1; i++)
	{
		if (esDivisor(i, n))
		{
			acumulado += i;
		}
	}

	return acumulado;
}

bool esNumeroPerfecto(int n)
{
	return (sumaDivisores(n) == n) && (n != 0);
}

int main()
{
	int inicio, fin;

	cout << "Busqueda de Números Perfectos en un Rango" << endl;
	cout << "Ingrese valor inicial: ";
	cin >> inicio;

	cout << "Ingrese valor final: ";
	cin >> fin;

	cout << "Buscando numeros perfectos en el rango indicado ..." << endl;

	cout << "Numeros Perfectos Encontrados --------------------" << endl;

	for (size_t i = inicio; i <= fin; i++)
	{
		if (esNumeroPerfecto(i))
		{
			cout << i << endl;
		}
	}

	return 0;
}