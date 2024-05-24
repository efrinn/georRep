#include <iostream>

using namespace std;

int main() {
    char responde;
    int number;

    do {
        cout << "Ingrese un numero: ";
        cin >> number;

        cout << "Quiere continuar (S/N): ";
        cin >> responde;

    } while(responde == 'S' || responde == 's');

    return 0;
}