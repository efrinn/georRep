#include <iostream>

using namespace std;

int main()
{
    int acumuladordetumama = 0;
    int valor;

    cout << "Introduce valores para acumular. Ingresa 9999 para finalizar la carga." << endl;

    while (true) {
        
        cout << "Introduce un valor: ";
        cin >> valor;

        
        if (valor == 9999) {
            break;  
        }

        
        acumuladordetumama += valor;
    }


    cout << "Valor acumulado: " << acumuladordetumama << endl;

    
    if (acumuladordetumama == 0) {
        cout << "El valor acumulado es cero." << endl;
    }
    else if (acumuladordetumama > 0) {
        cout << "El valor acumulado es mayor a cero." << endl;
    }
    else {
        cout << "El valor acumulado es menor a cero." << endl;
    }

    return 0;
}