///Ejercicio: EJ06IngresarRecaudacionEnPesosDeCuatroSemanasMostrarElPromedioYPorcentajeDeCadaSemana
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
/*
Ingresar la recaudacion de cuatro semanas en pesos, mostrar el promedio y el porcentaje de cada semana.
*/

  int recaudacionSemana1, recaudacionSemana2, recaudacionSemana3, recaudacionSemana4, promedioRecaudacion;
  int porcentajeSemana1, porcentajeSemana2, porcentajeSemana3, porcentajeSemana4;
  int totalRecaudado;

  cout << "Ingrese la recaudacion de la semana 1: ";
  cin >> recaudacionSemana1;
  cout << "Ingrese la recaudacion de la semana 2: ";
  cin >> recaudacionSemana2;
  cout << "Ingrese la recaudacion de la semana 3: ";
  cin >> recaudacionSemana3;
  cout << "Ingrese la recaudacion de la semana 4: ";
  cin >> recaudacionSemana4;

  totalRecaudado = recaudacionSemana1 + recaudacionSemana2 + recaudacionSemana3 + recaudacionSemana4;
  promedioRecaudacion = totalRecaudado / 4;

  porcentajeSemana1 = (recaudacionSemana1 * 100) / totalRecaudado;
  porcentajeSemana2 = (recaudacionSemana2 * 100) / totalRecaudado;
  porcentajeSemana3 = (recaudacionSemana3 * 100) / totalRecaudado;
  porcentajeSemana4 = (recaudacionSemana4 * 100) / totalRecaudado;

  cout << "El promedio de recaudacion es: " << promedioRecaudacion << endl;
  cout << "El porcentaje de la semana 1 es: " << porcentajeSemana1 << endl;
  cout << "El porcentaje de la semana 2 es: " << porcentajeSemana2 << endl;
  cout << "El porcentaje de la semana 3 es: " << porcentajeSemana3 << endl;
  cout << "El porcentaje de la semana 4 es: " << porcentajeSemana4 << endl;

  system("pause");
  return 0;
}