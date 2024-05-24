/* 2-Escriba un programa para leer 15 numeros negativos y convertirlos a positivos e imprimir dichos numeros */

#include <iostream>

using namespace std;

int main(){
	int contador = 0;
	int numero;
	
	cout << "Ingrese 15 numeros negativos: " << endl;
	
	do{
		cout << "Numero " << contador + 1 << ": ";
		cin >> numero;
		
		if(numero < 0){
			numero = -numero;
			cout << "Numero convertido en positivo: " << numero << endl;
		}else{
			cout << "El numero no es negativo, ingrese otro numero." << endl;
		}
		contador++;
	}while(contador < 15);
	
	return 0;
}
