#include <iostream>

using namespace std;

int main() {
	const char nombre[] = "Juan Camilo Sánchez Urrego";

	for (size_t i = 0; i < sizeof(nombre)/sizeof(nombre[0]); i++)
	{
		cout << nombre[i] << " --> " << (int)nombre[i] << endl;
	}	
}