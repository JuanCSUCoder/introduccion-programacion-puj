#include <iostream>

using namespace std;

struct sPersona {
	string nombre;
	string apellido;

	int edad;
};

int main()
{
	sPersona yo;

	cout << "Nombres: ";
	cin >> yo.nombre;

	cout << "Apellidos: ";
	cin >> yo.apellido;

	cout << "Edad: ";
	cin >> yo.edad;

	cout << yo.apellido << '\t' << yo.nombre << '\t' << yo.edad << endl;

	return 0;
}