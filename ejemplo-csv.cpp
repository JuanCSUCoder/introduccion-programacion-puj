#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream csv;

	csv.open("datos/prueba.csv", ios::out);

	if (csv.fail())
	{
		cout << "Fallo al abrir el archivo" << endl;
		return 1;
	}

	for (short i = 0; i < 20; i++)
	{
		csv << i << ',' << i * 2 << ',' << i * i << endl;
	}

	csv.close();

	ifstream csv_in;

	csv_in.open("datos/prueba.csv", ios::in);

	if (csv_in.fail())
	{
		cout << "Fallo al abrir el archivo" << endl;
		return 2;
	}

	int temp;
	char separador;

	csv_in >> temp;
	csv_in.get(separador);

	while (!csv_in.eof())
	{
		if (separador==',')
		{
			separador = '\t';
		}

		cout << temp << separador;

		csv_in >> temp;
		csv_in.get(separador);
	}

	csv_in.close();

	return 0;
}