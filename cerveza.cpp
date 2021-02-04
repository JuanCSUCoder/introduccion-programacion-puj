#include <iostream>

using namespace std;

int main(){
    int edad, numCervezas;
    bool edadValida = false, numValido = false;
    while (!edadValida || !numValido)
    {
        cout << "¿Cuantas cervezas quiere? ";
        cin >> numCervezas;

        cout << "¿Cuál es su edad? ";
        cin >> edad;

        if (numCervezas >= 0) {
            numValido = true;
        }
        if (edad >= 0) {
            edad = true;
        }
        if (!edadValida || !numValido) {
            cout << "Ingrese una entrada válida" << endl;
        }
    }
    
    
    if (edad > 17) {
        if (numCervezas > 1){
            cout << "Con gusto, aquí estan sus " << numCervezas << " cervezas" << endl;
        } else if (numCervezas == 1) {
                cout << "Con gusto, aquí está su cerveza" << endl;
        } else {
            cout << "Entonces ¿Qué se le ofrece?" << endl;
        }
    } else { 
        if (numCervezas > 1) {
            cout << "Cuales cervezas!";
        } else if (numCervezas == 1) {
            cout << "Cual cerveza!";
        }
        cout << " Tenga un pirulito y vaya para la casa" << endl;
    }
}