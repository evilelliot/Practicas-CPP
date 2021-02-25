/*
 * Author: Alberto Ocaranza
 * Date: 25-02-2021
 * */
#include <array>
#include <iostream>
#include <iomanip>
using namespace std;


// utilizamos el método bubble sort para acomodar los valores
// es más sencillo así que hacer varios if
double calcularPromedio(double* cal, int size){
	double tmp = 0;
	
	for(int i = size; i >= 0; i--){
		tmp = tmp + cal[i];
	}
	
	return tmp / size;
}


int main(){
	int size;
	double * calArray; // hacemos un array pointer porqué no sabemos que tamaño tendrá
	int decimales = 2;
	cout << "Escribe el numero de calificaciones que desees: " << endl;
	cin >> size;

	calArray = new double[size]; // guardamos memoria en el array pointer con el tamaño que metió el usuario
	// rellenamos el array
	for(int i = 0; i <= size - 1; i++){
		cout << "Ingresa la calificación #" << i + 1 << endl;
		cin >> calArray[i];
	}	
	
	
	// formateando los decimales del promedio
	std::cout << std::fixed;
	std::cout << std::setprecision(decimales);
	cout << "------------------------------------------------_" << endl;
	cout << "El promedio es: " << calcularPromedio(calArray, size) << endl; // llamamos a la func directamente para no guardar el valor en memoria
return 0;
}
