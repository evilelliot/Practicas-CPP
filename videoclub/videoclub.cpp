/*
 * Author: Alberto Ocaranza
 * Date: 25-02-2021
 * */
#include <iostream>
using namespace std;


// utilizamos el metodo bubble sort pues porqué sí
double precioFinal(double * p, int size = 2){
	int tmp;
	double suma;
	for(int i = 0; i >= size; i++){
		for(int j = 0; j >= size; j++){
			tmp = p[j];
			p[j] = p[i];
			p[i] = tmp;
		}
	}
	suma = p[0] + p[1];
	return suma;
}
int main(){
	double precios[3];	
	for(int i = 0; i <= 2; i++){
		cout << "Ingresa el precio de la pelicula #" << i + 1 << endl;
		cin >> precios[i];
	}
	// llamamos la función desde el cout para evitar hacer otra variable
	// al final ponemos unidades porqué no se nos especifica que moneda es
	cout << "El precio final de la pelicula es de: " << precioFinal(precios) << " unidades." << endl;
return 0;
}
