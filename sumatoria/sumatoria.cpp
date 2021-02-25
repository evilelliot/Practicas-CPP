/*
 * Author: Alberto Ocaranza
 * Date: 25-02-2021
 * */
#include <iostream>
using namespace std;


int main(){
	int sum;
	cout << "Calculando la sumatoria de los multiplos de 5 entre el 1 y el 100." << endl;
	for(int i = 0;  i <= 100; i = i + 5){
		// formateamos el mensaje para que se vea más bonito
		if(i == 100){
			cout << i << ".";
		}else{
			cout << i << ",";
		}
		sum = sum + i;
	}
	cout << endl << "La sumatoria es: " << sum << endl;

return 0;	
}
