#include <iostream>

using namespace std;

int main() {
    int num, suma = 0;

    cout << "Ingrese un numero (0 para salir): ";
    cin >> num;

    while (num != 0) 
    {
        if (num % 2 != 0) 
        {
            suma += num;
        }
        cout << "Ingrese un numero (0 para salir): ";
        cin >> num;
    }

    cout << "La suma de los numeros impares es: " << suma << endl;

    return 0;
}