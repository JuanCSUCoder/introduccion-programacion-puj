#include <iostream>

using namespace std;

bool preguntaSiONo(string pregunta) {
    string respuesta;
    bool resultado;
    bool valida = false;

    while (!valida)
    {
        cout << pregunta << " (s/n): ";
        cin >> respuesta;

        if(respuesta=="s" || respuesta == "S"){
            valida = true;
            resultado = true;
        } else
        {
            if (respuesta=="n" || respuesta == "N"){
                valida = true;
                resultado = false;
            }
        }
        if(!valida) {
            cout << "De una respuesta valida por favor" << endl;
        }
        
    }

    return resultado;
}

int main(){
    bool andando = true;
    bool queso, tocineta, lechuga;
    int precio;

    cout << "Sistema de Pedidos de Hamburguesas   ---------------------------------------------" << endl;

    while (andando)
    {
        queso = preguntaSiONo("Quiere incluir queso a su pedido?");
        tocineta = preguntaSiONo("Quiere incluir tocineta a su pedido?");
        lechuga = preguntaSiONo("Quiere incluir lechuga a su pedido?");

        if(queso){
            if(tocineta){
                precio = 10000;
            } else {
                if (lechuga) {
                    precio = 8000;
                }else
                {
                    cout << "Error: El pedido ingresado no tiene un precio definido" << endl;
                }
                
            }
        } else {
            if(tocineta) {
                precio = 7000;
            } else
            {
                if(lechuga) {
                    precio = 6000;
                } else {
                    cout << "Error: El pedido ingresado no tiene un precio definido" << endl;
                }
            }
            
        }

        cout << "El pedido vale: " << precio << endl;

        andando = preguntaSiONo("Desea realizar otro pedido?");
    }
    
    cout << "Cerrando el sistema" << endl;
}