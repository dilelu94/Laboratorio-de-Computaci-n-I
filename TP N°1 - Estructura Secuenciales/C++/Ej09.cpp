///Ejercicio: Ej09IngresarMinutosYMostrarHorasYMinutos
///Autor: Diego Leonel Luque
///Fecha: 30
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  int minutos, horas, minutosRestantes;
  cout << "Ingrese minutos: ";
  cin >> minutos;
  horas = minutos / 60;
  minutosRestantes = minutos % 60;
  cout << "Horas: "<< horas << endl;
  cout << "Minutos: "<< minutosRestantes << endl;
  cout << endl;
  
  system("pause");
  return 0;
}