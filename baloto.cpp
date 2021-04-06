#include <iostream>

using namespace std;

void inicializarArreglo(int vec[],int t, int valor){
 for (int i=0;i<t;i++){
  vec[i]=valor;
 }
}

void imprimirJuegoPropuesto(int vec[], int tama)
{
	cout << "Juego Propuesto --------------" << endl;

	for (size_t i = 0; i < tama; i++)
	{
		if (i < tama - 1)
		{
			cout << vec[i] << ", ";
		}
		else
		{
			cout << vec[i] << endl;
		}
	}
}

int main(){
  const int T=100;
  int arreglo[T];
  int tam=6;

	inicializarArreglo(arreglo, tam, 0);
	imprimirJuegoPropuesto(arreglo, tam);
	// proponerJuego(arreglo,tam,1,43);
	// imprimirJuegoPropuesto(arreglo,tam);

	return 0;
}