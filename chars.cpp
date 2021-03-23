#include <iostream>
#include <string.h>

using namespace std;

int main() {
	const char nombre[] = "Juan Camilo Sánchez Urrego";

	cout << "Char[]: " << nombre << endl;

	for (size_t i = 0; i < sizeof(nombre)/sizeof(nombre[0]); i++)
	{
		cout << nombre[i] << " --> " << (int)nombre[i] << endl;
	}

	string nombre_str = "Juan Camilo Sánchez Urrego";

	cout << "String: " << nombre_str << endl;

	for (size_t i = 0; i < nombre_str.length(); i++)
	{
		cout << nombre_str[i] << " --> " << (int)nombre_str[i] << endl;
	}
	
	return 0;
}