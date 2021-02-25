/*
 * Author: Alberto Ocaranza
 * Date: 25-02-2021
 * */
#include <iostream>
#include <iomanip>
using namespace std;

// la formula para convertir minutos a horas es
// x = m / 60
double conversorHoras(double minutos){
	return minutos / 60;
}
// la formula para convertir minutos a días es
// x = m / 1440
double conversorDias(double minutos){
	return minutos / 1440;
}
int main(){
// se tienen que igualar las escalas de los terminos para
// trabajar correctamente, en este caso dias y horas a minutos	
// 1 día tiene 1440 minutos
// 1 hora tiene 60 minutos
int decimales = 2;
int minutos = 0;

cout << "Ingresa los minutos que quieres convertir: " << endl;
cin >> minutos;

// formateando los decimales
// evitamos mostrar información extra en pantalla
std::cout << std::fixed;
std::cout << std::setprecision(decimales);
cout << "-------------------------------------------------------_" << endl;
cout << minutos << " en minutos es igual a: " << minutos << endl;
cout << minutos << " convertidos a horas: "   << conversorHoras(minutos) << endl;
cout << minutos << " convertidos a dias: "    << conversorDias(minutos)   << endl;


return 0;
}
