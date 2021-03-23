#include <iostream>

using namespace std;

int main() {
	char cadena[30];

	cout << "Cadena de Texto (máximo 30 caracteres): ";
	cin >> cadena;

	char letra_a_buscar;

	cout << "Letra a Buscar: ";
	cin >> letra_a_buscar;

	short acumulado = 0;

	for (size_t i = 0; cadena[i]!='\0'; i++)
	{
		if (cadena[i]==letra_a_buscar)
		{
			acumulado++;
		}
	}

	cout << "Se ha encontrado la letra " << acumulado << " veces" << endl;	

	return 0;
}