///Ejercicio: EJ05IngresarCantidadVendidaDeLosAlfajoresAyByCyMostrarPorcentajeVendidoDeCadaUno
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
/*
Calcular porcentaje de alfajorA, alfajorB y alfajorC vendidos

*/
  int alfajorA, alfajorB, alfajorC, totalVendidos, porcentajeA, porcentajeB, porcentajeC;
  cout << "Ingrese la Cantidad de Alfajores A Vendidos" << endl;
  cin >> alfajorA;
  cout << "Ingrese la Cantidad de Alfajores B Vendidos" << endl;
  cin >> alfajorB;
  cout << "Ingrese la Cantidad de Alfajores C Vendidos" << endl;
  cin >> alfajorC;
  totalVendidos = alfajorA + alfajorB + alfajorC;
  porcentajeA = alfajorA * 100 / totalVendidos;
  porcentajeB = alfajorB * 100 / totalVendidos;
  porcentajeC = alfajorC * 100 / totalVendidos;
  cout << "El porcentaje de Alfajor A vendido es: " << porcentajeA << "%" << endl;
  cout << "El porcentaje de Alfajor B vendido es: " << printf("%.2f", porcentajeB) << "%" << endl;
  cout << "El porcentaje de Alfajor C vendido es: " << porcentajeC << "%" << endl;
  
  system("pause");
  return 0;
}