#include <iostream>
#include <fstream>

using namespace std;

struct sPersona
{
	string nombre;
	string apellido;

	int edad;
};

int main()
{
	sPersona yo;

	// Flujo del Archivo: este tiene la salida y entrada en uno solo
	fstream archivo;

	// // Flujo de Salida
	// ofstream salida;

	// // Flujo de Entrada
	// ifstream entrada;

	// Con ios::out Crea el archivo si no existe o lo reemplaza si ya existe
	// Con ios::app Lo abre para añadirle algo al final y si no existe lo crea
	archivo.open("datos/ejemplo_archivos.txt", ios::app);

	if (archivo.fail())
	{
		cout << "Error al abrir el archivo" << endl;
		return 1;
	}

	cout << "Nombres: ";
	cin >> yo.nombre;

	cout << "Apellidos: ";
	cin >> yo.apellido;
	cout << "Edad: ";
	cin >> yo.edad;

	archivo << yo.apellido << '\t' << yo.nombre << '\t' << yo.edad << endl;

	archivo.close();

	return 0;
}