/*
Crear una función:
	void timeAdd(int &dias1, int &horas1, int &minutos1, int &segundos1, int dias2, int horas2, int minutos2, int segundos2)
*/

#include <iostream>

using namespace std;

void timeAdd(int &dias1, int &horas1, int &minutos1, int &segundos1, int dias2, int horas2, int minutos2, int segundos2)
{
	// Conversión a segundos
	// Primer Grupo de Variables
	horas1 += dias1 * 24;
	minutos1 += horas1 * 60;
	segundos1 += minutos1 * 60;

	// Segundo Grupo de Variables
	horas2 += dias2 * 24;
	minutos2 += horas2 * 60;
	segundos2 += minutos2 * 60;

	// Suma
	int suma_segundos = segundos1 + segundos2;

	// Conversion a Dias, Horas, Minutos y Segundos
	segundos1 = suma_segundos % 60;
	minutos1 = (suma_segundos / 60) % 60;
	horas1 = (suma_segundos / 60 / 60) % 24;
	dias1 = suma_segundos / 60 / 60 / 24;
}

int main()
{
	int d, h, m, s, d2, h2, m2, s2;

	cout << "Sumador de Tiempos ----------------" << endl;
	cout << "Ingrese los datos del primer tiempo v" << endl;
	cout << "Dias: ";
	cin >> d;
	cout << "Horas (0-23): ";
	cin >> h;
	cout << "Minutos (0-59): ";
	cin >> m;
	cout << "Segundos (0-59): ";
	cin >> s;

	cout << "Ingrese los datos del segundo tiempo v" << endl;
	cout << "Dias: ";
	cin >> d2;
	cout << "Horas (0-23): ";
	cin >> h2;
	cout << "Minutos (0-59): ";
	cin >> m2;
	cout << "Segundos (0-59): ";
	cin >> s2;

	timeAdd(d, h, m, s, d2, h2, m2, s2);

	cout << endl << "Resultado de la Suma: " << d << " días\t" << h << ":" << m << ":" << s << endl;

	return 0;
}