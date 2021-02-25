/*
 * Author: Alberto Ocaranza
 * Date: 25-02-2021
 * */
#include <iostream>
using namespace std;

int main(){

int numeroMaximo;

cout << "Ingresa un numero final para calcular sus pares: " << endl;
cin >> numeroMaximo;


cout << "Los numeros impares entre el 1 y el " << numeroMaximo << " son: " << endl;
for(int i = 1; i <= numeroMaximo; i++){
	// si el modulo de i/2 no es 0 es impar
	if(i%2 != 0){
		// formato para que se vea más legible
		if(i == numeroMaximo - 1){
			cout << i << ".";
		}else{
			cout << i << ", ";
		}
	}
}
return 0;	
}
