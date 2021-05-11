#include <iostream>
#include <fstream>

using namespace std;

// Output:
// -0      -0      0       2
// -0.25   -2      1       3
// -0.5    -4      4       4
// -0.75   -6      9       5
// -1      -8      16      6
// -1.25   -10     25      7
// -1.5    -12     36      8
// -1.75   -14     49      9
// -2      -16     64      10
// -2.25   -18     81      11
// -2.5    -20     100     12
// -2.75   -22     121     13
// -3      -24     144     14
// -3.25   -26     169     15
// -3.5    -28     196     16
// -3.75   -30     225     17
// -4      -32     256     18
// -4.25   -34     289     19
// -4.5    -36     324     20
// -4.75   -38     361     21

int main()
{
	ofstream csv;

	csv.open("datos/prueba.csv", ios::out);

	if (csv.fail())
	{
		cout << "Fallo al abrir el archivo" << endl;
		return 1;
	}

	for (float i = 0; i < 20; i++)
	{
		csv << -i/4 << ',' << -i * 2 << ',' << i * i << '\t' << i + 2 << endl;
	}

	csv.close();

	ifstream csv_in;

	csv_in.open("datos/prueba.csv", ios::in);

	if (csv_in.fail())
	{
		cout << "Fallo al abrir el archivo" << endl;
		return 2;
	}

	float temp;
	char separador;

	csv_in >> temp;
	csv_in.get(separador);

	while (!csv_in.eof())
	{
		if (separador == ',')
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