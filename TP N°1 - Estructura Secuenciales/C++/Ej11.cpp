///Ejercicio: Ej11IngresarPorTecladoCantidadDeMinutosYMostrarDiasHorasYMinutos
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
/*

Ingresar Minutos y mostrar dias horas y minutos equivalentes
*/
  int minutos, dias, horas, minutosRestantes;
  cout << "Ingrese minutos: ";
  cin >> minutos;
  dias = minutos / 1440;
  horas = (minutos % 1440) / 60;
  minutosRestantes = (minutos % 1440) % 60;
  cout << "Dias: " << dias << endl;
  cout << "Horas: "<< horas << endl;
  cout << "Minutos: "<< minutosRestantes << endl;

  system("pause");
  return 0;
}