#include <iostream>

using namespace std;

const int T = 50;

struct sImg
{
	string nombre;
	bool img[T][T];
	int filas;
	int columnas;
};

struct sRazonPixeles
{
	int porcentaje_blancos;
	int porcentaje_negros;
};

void escribirImagen5x5(sImg &imagen, bool img[5][5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			imagen.img[i][j] = img[i][j];
		}
	}

	imagen.filas = 5;
	imagen.columnas = 5;
}

void escribirImagen2x2(sImg &imagen, bool img[2][2])
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			imagen.img[i][j] = img[i][j];
		}
	}

	imagen.filas = 2;
	imagen.columnas = 2;
}

sRazonPixeles calcular_razon_bn(sImg imagen)
{
	sRazonPixeles razon;

	razon.porcentaje_blancos = 0;
	razon.porcentaje_negros = 0;

	for (int i = 0; i < imagen.filas; i++)
	{
		for (int j = 0; j < imagen.columnas; j++)
		{
			if (imagen.img[i][j])
			{
				razon.porcentaje_blancos++;
			}
			else
			{
				razon.porcentaje_negros++;
			}
		}
	}

	razon.porcentaje_blancos = (razon.porcentaje_blancos * 100) / (imagen.filas * imagen.columnas);
	razon.porcentaje_negros = (razon.porcentaje_negros * 100) / (imagen.filas * imagen.columnas);

	return razon;
}

bool tiene_patron_en(int fila, int columna, sImg original, sImg patron)
{
	bool encontrado = true;

	for (int i = fila; i < fila + patron.filas; i++)
	{
		for (int j = columna; j < columna + patron.columnas; j++)
		{
			if (original.img[i][j] != patron.img[i - fila][j - columna])
			{
				encontrado = false;
			}
		}
	}

	return encontrado;
}

int contar_patrones(sImg original, sImg patron)
{
	int cuenta = 0;

	if (patron.filas > original.filas || patron.columnas > original.columnas)
	{
		return 0;
	}

	for (int i = 0; i < original.filas - patron.filas + 1; i++)
	{
		for (int j = 0; j < original.columnas - patron.columnas + 1; j++)
		{
			if (tiene_patron_en(i, j, original, patron))
			{
				cuenta++;
			}
		}
	}

	return cuenta;
}

int main()
{
	sImg estrella, patron;

	estrella.nombre = "Estrella";
	patron.nombre = "Patron";

	bool img[5][5] = {{false, false, true, false, false},
										{true, true, true, true, true},
										{false, true, true, true, false},
										{true, true, false, true, true},
										{true, false, false, false, true}};
	bool img_patron[2][2] = {{true, true},
													 {false, true}};

	escribirImagen5x5(estrella, img);
	escribirImagen2x2(patron, img_patron);

	sRazonPixeles resultado = calcular_razon_bn(estrella);

	cout << resultado.porcentaje_blancos << '/' << resultado.porcentaje_negros << endl;

	cout << "Cuenta de Patron: " << contar_patrones(estrella, patron) << endl;

	return 0;
}