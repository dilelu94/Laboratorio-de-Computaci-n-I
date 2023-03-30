///Ejercicio: Ej10IngresarHorasYMostrarCuantosDiasYHorasEquivalen
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  int horas, dias, horasRestantes;
  cout << "Ingrese horas: ";
  cin >> horas;
  dias = horas / 24;
  horasRestantes = horas % 24;
  cout << "Dias: " << dias << endl;
  cout << "Horas: "<< horasRestantes << endl;

  system("pause");
  return 0;
}