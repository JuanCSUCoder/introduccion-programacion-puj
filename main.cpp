#include <iostream>

using namespace std;

int main(){
    bool active = true;
    while (active)
    {
        int numero;

        cout << "Ingrese un número entero: ";
        cin >> numero;
        cout << endl;

        if(numero%2!=0){
            cout << "Es impar" << endl;
        } else
        {
            cout << "Es par" << endl;
        }
    }
    
    
    return 1;
}