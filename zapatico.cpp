// https://sophia.javeriana.edu.co/programacion/sites/default/files/pdfParciales/2018-30-PensamientoAlgoritmico-2.pdf

/*
Valores de la Simulacion:
	- Nombres de los Participantes
	- Estado de Cada Uno
		'd' si tiene el pie derecho
		'i' si tiene el pie izquierdo
		'f' si salió del juego

	Prueba de Firma
*/

#include <iostream>
#include <string>

using namespace std;

short cantidadEnJuego(short estados[], int cantidad)
{
	short enJuego = 0;

	for (short i = 0; i < cantidad; i++)
	{
		if (estados[i] > 0)
		{
			enJuego++;
		}
	}

	return enJuego;
}

short seleccionarJugador(short estados[], int cantidad)
{
	short silabas = 13;
	short numEnJuego = cantidadEnJuego(estados, cantidad);

	return silabas % numEnJuego;
}

void restarAJugador(short estados[], short jugador, int cantidadDeJugadores)
{
	short cuenta = 0;

	for (short i = 0; i < cantidadDeJugadores; i++)
	{
		if (estados[i] > 0)
		{
			if (cuenta == jugador)
			{
				estados[i]--;
			}
			
			cuenta++;
		}
	}
}

void simularRonda(short estados[], int cantidadDeJugadores)
{
	short jugador = seleccionarJugador(estados, cantidadDeJugadores);

	restarAJugador(estados, jugador, cantidadDeJugadores);
}

char imprimirEstado(short estado)
{
	switch (estado)
	{
	case 2:
		return 'd';
		break;
	case 1:
		return 'i';
		break;
	case 0:
		return 'f';
		break;

	default:
		throw invalid_argument("Estado No Valido");
		break;
	}
}

void imprimirRonda(string jugadores[], short estados[], int cantidadDeJugadores, int ronda)
{
	cout << " ------------ RONDA " << ronda << " --------------------------" << endl;

	for (short i = 0; i < cantidadDeJugadores; i++)
	{
		cout << i + 1 << ". " << jugadores[i] << '\t' << imprimirEstado(estados[i]) << endl;
	}
}

void imprimirGanador(string jugadores[], short estados[], int cantidad)
{
	string ganador = "";
	int i = 0;

	while (ganador == "")
	{
		if (estados[i] > 0)
		{
			ganador = jugadores[i];
		}
		i++;
	}

	cout << "El ganador es " << ganador << endl;
}

void simularJuego(string jugadores[], short estados[], int cantidadDeJugadores)
{
	bool en_juego = true;
	int ronda = 0;

	while (en_juego)
	{
		ronda++;

		imprimirRonda(jugadores, estados, cantidadDeJugadores, ronda);
		simularRonda(estados, cantidadDeJugadores);

		if (cantidadEnJuego(estados, cantidadDeJugadores) == 1)
		{
			en_juego = false;
		}
	}

	ronda++;

	imprimirRonda(jugadores, estados, cantidadDeJugadores, ronda);
	imprimirGanador(jugadores, estados, cantidadDeJugadores);
}

int main()
{
	short participantes;

	cout << "Simulador de Zapatico Cochinito" << endl;
	cout << "Ingrese el número de participantes: ";
	cin >> participantes;

	string nombres[participantes];
	short estados[participantes];

	for (short i = 0; i < participantes; i++)
	{
		cout << "Nombre Participante #" << i + 1 << ": ";
		getline(cin.ignore(), nombres[i]);

		char estado;

		cout << "Estado (d, i o f): ";
		cin >> estado;

		switch (estado)
		{
		case 'd':
			estados[i] = 2;
			break;
		case 'i':
			estados[i] = 1;
			break;
		case 'f':
			estados[i] = 0;
			break;

		default:
			cout << "Estado de Jugador NO VALIDO, usando predeterminado 'd'" << endl;
			estados[i] = 2;
			break;
		}
	}

	simularJuego(nombres, estados, participantes);

	return 0;
}