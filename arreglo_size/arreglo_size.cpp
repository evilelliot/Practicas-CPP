/*
 * Author: Alberto Ocaranza
 * Date: 25-02-2021
 * */
#include <array>
#include <iostream>
using namespace std;

// función para revertir el orden del array
// opcionalmente se puede guardar en un nuevo array
// quitar comentario en donde están ** para almacenar al reverso
void revertirPalabra(char* palabra){
	int palabraSize = sizeof(palabra);
	char reversa[palabraSize]; // array inverso
	
	
	cout << "Mostrando la cadena al reverso." << endl;
	for(int i = palabraSize; i >= 0; i--){
		cout << palabra[i];
		// almacenando el caracter en el orden inverso
		reversa[i] = palabra[i];
	}
	cout << endl;
}

int main(){
	// necesitamos determinar un array sin tamaño
	// por lo que usamos un pointer para guardar memoria indefinida
	int size;
	char * cadenaArray;

	cout << "Determina el tamaño de tu cadena por favor: " << endl;
	cin >> size;
	
	// inicializamos el array con el tamaño de size
	// usando new char[size]
	cadenaArray = new char[size];
	for(int i = 0; i <= size - 1; i++){
		cout << "Ingresa el caracter #" << i + 1 << endl;
		cin >> cadenaArray[i];
	}

	revertirPalabra(cadenaArray);
return 0;	
}
