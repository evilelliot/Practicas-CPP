/*
 * Author: Alberto Ocaranza
 * Date: 25-02-2021
 * */
#include <iostream>
using namespace std;

int main(){
	// se nos pide que sea un entero no negativo
	// por lo tanto usamos un unsigned int
	// de la misma forma todos los números que interactuan con el tienen que ser
	// del mismo data type para evitar conflictos 
	unsigned int numero = 0, factorial = 1, i = 0;
	cout << "Ingresa el numero que desees: " << endl;
	cin >> numero;
	for(i = 1; i <= numero; i++){
		factorial = factorial * i;
	}

	cout << "El factorial de " << numero << " es " << factorial << endl;
return 0;	
}
