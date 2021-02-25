// https://sophia.javeriana.edu.co/programacion/sites/default/files/pdfParciales/2018-30-PensamientoAlgoritmico-1.pdf
// Tennis Bot

/**
 * Instrucciones:
 *  - Avanzar (a): Moverse hacia adelante 2 unidades
 *  - Girar (g): Girar sobre su propio eje 90° a la izquierda
 * 
 * Orientaciónes:
 *  - Jugador:
 *      - Eje X + a la derecha
 *      - Eje Y + al frente
 *  - TennisBot:
 *      - Eje X Positivo
 *      - Ubicado en (0, 0)
**/

#include <iostream>
#include <string>

using namespace std;

class Posicion
{
public:
    int x;
    int y;
};

enum Apunta
{
    Hacia0 = 0,
    Hacia90 = 1,
    Hacia180 = 2,
    Hacia270 = 3,
};

class Orientacion
{
public:
    Apunta direccion;

    void girar()
    {
        switch (direccion)
        {
        case Apunta::Hacia0:
            direccion = Apunta::Hacia90;
            break;
        case Apunta::Hacia90:
            direccion = Apunta::Hacia180;
            break;
        case Apunta::Hacia180:
            direccion = Apunta::Hacia270;
            break;
        case Apunta::Hacia270:
            direccion = Apunta::Hacia0;
            break;

        default:
            break;
        }
    }

    int grados() {
        switch (direccion)
        {
        case Apunta::Hacia0:
            return 0;
            break;
        case Apunta::Hacia90:
            return 90;
            break;
        case Apunta::Hacia180:
            return 180;
            break;
        case Apunta::Hacia270:
            return 270;
            break;
        default:
            break;
        }
    }
};

class Robot
{
public:
    Posicion posicion;
    Orientacion orientacion;

    Robot(){
        posicion.x = 0;
        posicion.y = 0;

        orientacion.direccion = Apunta::Hacia0;
    }

    bool ejecutar(char instruccion)
    {
        switch (instruccion)
        {
        case 'a':
            avanzar();
            return true;
            break;
        case 'g':
            girar();
            return true;
            break;
        
        default:
            return false;
            break;
        }
    }

private:
    void avanzar()
    {
        switch (orientacion.direccion)
        {
        case Apunta::Hacia0:
            posicion.x += 2;
            break;
        case Apunta::Hacia90:
            posicion.y += 2;
            break;
        case Apunta::Hacia180:
            posicion.x -= 2;
            break;
        case Apunta::Hacia270:
            posicion.y -= 2;
        
        default:
            break;
        }
    }

    void girar()
    {
        orientacion.girar();
    }
};

int main()
{
    string secuencia = "aagagagaagagga";

    Robot tennisBot;

    for (int i = 0; i < secuencia.length(); i++)
    {
        tennisBot.ejecutar(secuencia[i]);
    }

    cout << "X: " << tennisBot.posicion.x << endl;
    cout << "Y: " << tennisBot.posicion.y << endl;
    cout << "Rotación: " << tennisBot.orientacion.grados() << "°" << endl;

    Robot tennisBot2;

    while (true)
    {
        string entrada;
        cin >> entrada;

        tennisBot2.ejecutar(entrada[0]);

        cout << "X: " << tennisBot2.posicion.x << endl;
        cout << "Y: " << tennisBot2.posicion.y << endl;
        cout << "Rotación: " << tennisBot2.orientacion.grados() << "°" << endl;
    }
    
    

    return 0;
}