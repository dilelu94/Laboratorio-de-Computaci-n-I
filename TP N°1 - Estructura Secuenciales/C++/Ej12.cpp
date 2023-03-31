///Ejercicio: Ej12IngresarCantidadDeHuevosCompradosYMostrarImporteAPagar
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
/*
//docenea = $100
//1 huevo = $12
*/
  int docena, huevos, huevosRestantes, importe;
  cout << "Ingrese cantidad de huevos: " << endl;
  cin >> huevos;
  docena = huevos / 12;
  huevosRestantes = huevos % 12;
  importe = (docena * 100) + (huevosRestantes * 12);
  cout << "Importe: $" << importe << endl;

  system("pause");
  return 0;
}