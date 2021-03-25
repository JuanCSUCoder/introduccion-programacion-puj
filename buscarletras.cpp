#include <iostream>

using namespace std;

int buscarLetra(char letra, char cadena[]) {
	int acumulado = 0;

	for (size_t i = 0; cadena[i]!='\0'; i++)
	{
		if (cadena[i]==letra)
		{
			acumulado++;
		}
	}

	return acumulado;
}

int localizarLetra(int orden, char letra, char cadena[]) {
	int posicion = -1;
	bool encontrado = false;

	for (size_t i = 0; cadena[i] != '\0' && !encontrado; i++)
	{
		if (cadena[i]==letra)
		{
			orden--;
		}
		
		if (orden==0)
		{
			posicion = i;
			encontrado = true;
		}
	}

	return posicion;
}

int main() {
	char cadena[30];

	cout << "Cadena de Texto (máximo 30 caracteres): ";
	cin >> cadena;

	char letra_a_buscar;

	cout << "Letra a Buscar: ";
	cin >> letra_a_buscar;

	int coincidencias = buscarLetra(letra_a_buscar, cadena);

	cout << "Se ha encontrado la letra " << coincidencias << " veces" << endl;
	cout << "En las posiciones: " << endl;

	for (size_t i = 1; i <= coincidencias; i++)
	{
		cout << localizarLetra(i, letra_a_buscar, cadena) << endl;
	}
	

	return 0;
}