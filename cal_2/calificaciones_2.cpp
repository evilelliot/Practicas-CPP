/*
 * Author: Alberto Ocaranza
 * Date: 25-02-2021
 * */
#include <iostream>
using namespace std;

int main(){
	
	double calificaciones[10];
	int max = 20;
	// llenando la lista de calificaciones
	for(int i = 0; i <= 9; i++){
		cout << "----------------------------" << endl;
		cout << "Ingresa la calificación #" << i + 1 << endl;
		cin >> calificaciones[i];
		if(calificaciones[i] > max){
			cout << "----------------------------" << endl;
			cout << "La calificacion maxima es " << max << endl;
			cout << "Ingresa la calificación #" << i + 1 << endl;
			cin >> calificaciones[i];
		}
		cout << endl;
	}

	// mostrando los resultados
	// podrían guardar los resultados convertidos en un array de chars
	// pero no pidió nada de eso, igual sería interesante
	cout << "Mostrando los resultados." << endl;
	for(int i = 0; i <= 9; i++){
		
			if(calificaciones[i] < 20 && calificaciones[i] >= 19){
				cout << calificaciones[i] << " se convierte a: A" << endl;
			}else if(calificaciones[i] <= 18 && calificaciones[i] >= 16){
				cout << calificaciones[i] << " se convierte a: B" << endl;
			}else if(calificaciones[i] <= 17 && calificaciones[i] >= 13){
				cout << calificaciones[i] << " se convierte a: C" << endl;
			}else if(calificaciones[i] <= 12 && calificaciones[i] >= 10){
				cout << calificaciones[i] << " se convierte a: D" << endl;
			}else if(calificaciones[i] <= 9 && calificaciones[i] >= 1){
				cout << calificaciones[i] << " se convierte a: E" << endl;
			}
	}
return 0;
}

