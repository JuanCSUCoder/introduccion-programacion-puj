#include <iostream>

using namespace std;

int main()
{
    string str;
    do
    {
        cout << "Ingrese texto: ";
        getline(cin, str);
        cout << str << endl;
    } while (str != "bye");

    return 0;
}