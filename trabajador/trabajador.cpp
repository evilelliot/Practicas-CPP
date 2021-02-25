/*
 * Author: Alberto Ocaranza
 * Date: 25-02-2021
 * */
#include <iostream>
using namespace std;


// función para aumentar el valor del salario en las horas extra
double aumentarValor(double hora){
	return hora + (hora / 2);
}
int main(){
	
	double horasTrabajadas, costoHora, horasExtra, salarioFinal;
	double tmp;
	cout << "Ingresa el total de horas que se trabajaron: " << endl;
	cin >> horasTrabajadas;

	cout << "Ingresa el salario por hora: " << endl;
	cin >> costoHora;

	if(horasTrabajadas > 40){
		
		horasExtra = horasTrabajadas - 40;
		tmp  = aumentarValor(costoHora) * horasExtra;
		
		salarioFinal = (40 * costoHora) + tmp;
		cout << "-----------------------------------------------------" << endl;
		cout << "Las horas extra trabajadas fueron: " << horasExtra << endl;
		cout << "El salario final es: " << salarioFinal << endl;
		
	}else{
		salarioFinal = 40 * costoHora;
		cout << "-----------------------------------------------------" << endl;
		cout << "El salario final es: " << salarioFinal << endl;
	}
return 0;	
}
