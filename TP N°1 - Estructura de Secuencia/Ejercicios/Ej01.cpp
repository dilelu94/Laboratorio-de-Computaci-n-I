///EJercicio: EJ01IngresarCantidadDeHorasTrabajadasPorUnOperarioYLaRemuneracionPorHoraYMostrarSueldoCorrespondiente
///Autor: Diego Leonel Luque
///Fecha: 29/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
	int horastrabajadas, remuneracionhoraria, sueldo;
	cout << "Ingrese Cantidad De Horas Trabajadas por el Operario" << endl;
	cin >> horastrabajadas;
	cout << "Ingrese Remuneracion por Hora" << endl;
	cin >> remuneracionhoraria;
	sueldo = horastrabajadas * remuneracionhoraria;
	cout << "El sueldo es :" << sueldo << endl;

	system("pause");
	return 0;
}
