// Para Cualquier arreglo en donde tenga el mismo número de filas y de columnas
// Y donde la suma de las filas y columnas sea 15
// Se llama también cuadrado mágico
// Arriba y a la derecha

#include <iostream>

using namespace std;

const int T = 5;

void inicializarCuadrado(int cuadrado[T][T])
{
	for (short i = 0; i < T; i++)
	{
		for (short j = 0; j < T; j++)
		{
			cuadrado[i][j] = 0;
		}
	}
}

void imprimirCuadrado(int cuadrado[T][T])
{
	cout << endl
			 << endl;
	for (short i = 0; i < T; i++)
	{
		for (short j = 0; j < T; j++)
		{
			cout << cuadrado[i][j] << '\t';
		}
		cout << endl;
	}
}

void hacerMagia(int cuadrado[T][T])
{
	int filas = -T / 2;
	int columnas = T / 2;
	for (short i = 0; i < T * T; i++)
	{
		if (cuadrado[T + filas % T - 1][columnas % T] != 0)
		{
			filas++;
			columnas++;
		}

		cuadrado[T + filas % T - 1][columnas % T] = i + 1;

		// Mover
		filas--;
		columnas++;
	}
}

int sumaColumna(int cuadrado[T][T], int columna)
{
	int acumulado = 0;
	for (short i = 0; i < T; i++)
	{
		acumulado += cuadrado[i][columna];
	}
	return acumulado;
}

int sumaFila(int cuadrado[T][T], int fila)
{
	int acumulado = 0;
	for (short i = 0; i < T; i++)
	{
		acumulado += cuadrado[fila][i];
	}
	return acumulado;
}

void imprimirCuadradoConSumas(int cuadrado[T][T])
{
	cout << endl
			 << endl;
	for (short i = 0; i < T; i++)
	{
		for (short j = 0; j < T; j++)
		{
			cout << cuadrado[i][j] << '\t';
		}

		cout << "=" << sumaFila(cuadrado, i) << endl;
	}

	for(short i = 0; i < T; i++) {
		cout << "||" << '\t';
	}
	cout << endl;

	for(short i = 0; i < T; i++) {
		cout << sumaColumna(cuadrado, i) << '\t';
	}
	cout <<endl;
}

int main()
{
	int cuadrado[T][T];

	inicializarCuadrado(cuadrado);
	imprimirCuadrado(cuadrado);
	hacerMagia(cuadrado);
	imprimirCuadradoConSumas(cuadrado);

	return 0;
}