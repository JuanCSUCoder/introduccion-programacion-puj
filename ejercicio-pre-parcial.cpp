#include <iostream>

using namespace std;

int main(){
    cout << "Ingrese un número entero: ";

    int n, s = 0;

    cin >> n;

    cout << "n = " << n << endl;

    cout << "s = ";

    while(n!=0) {
        cout << " + " << n%10;
        s += n%10;
        n /= 10;
    }

    cout << " = " << s << endl;

    int nuevo_s = 0;

    cout << "s = ";

    while(s>10){
        while(s!=0) {
            cout << " + " << s%10;
            nuevo_s += s%10;
            s /= 10;
        }
        s = nuevo_s;
        cout << " = " << s << endl;
        nuevo_s = 0;
    }

    if (s==9) {
        cout << "Es divisible por 9" << endl;
    } else {
        cout << "No es divisible por 9" << endl;
    }

    return 0;
}