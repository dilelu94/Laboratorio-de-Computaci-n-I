///Ejercicio: EJ04IngresarAsientosDisponiblesYOcupadosYCalcularYMostrarPorcentajeDeOcupacionYNoOcupacion
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  int asientosDisponibles, asientosOcupados, porcentajeOcupacion, porcentajeDisponibilidad;
  cout << "Ingrese la Cantidad de Asientos Disponibles" << endl;
  cin >> asientosDisponibles;
  cout << "Ingrese la Cantidad de Asientos Ocupados" << endl;
  cin >> asientosOcupados;
  porcentajeOcupacion = asientosOcupados * 100 / asientosDisponibles;
  porcentajeDisponibilidad = 100 - porcentajeOcupacion;
  cout << "El porcentaje de ocupacion es: " << porcentajeOcupacion << "%" << endl;
  cout << "El porcentaje de disponibilidad es: " << porcentajeDisponibilidad << "%" << endl;
  
  system("pause");
  return 0;
}