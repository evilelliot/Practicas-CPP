// la formula para convertir minutos a hora es
// x = m / 60
#include <iostream>
using namespace std;

int main(){
	
	double calificaciones[10];
	int min = 7;
	int max = 10;
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
	cout << "Mostrando los resultados." << endl;
	for(int j = 0; j <= 9; j++){
		if(calificaciones[j] < min){
			cout << "La calificación " << calificaciones[j] << " es reprobatoria." << endl;
		}else{
			cout << "La calificación " << calificaciones[j] << " es aprobatoria." << endl;
		}
	}
return 0;
}
