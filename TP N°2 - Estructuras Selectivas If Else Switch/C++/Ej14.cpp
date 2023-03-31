///Ejercicio: Ej13IngresarEdadYDistanciaYCalcularSiEstaONoExentoDeVotar
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
/*
Su edad es mayor a 70 años
Su edad es entre 18 y 70 años, pero se encuentra a más de 500 km de su ciudad.
*/
  int edad, distancia;
  cout << "Ingrese edad: " << endl;
  cin >> edad;
  cout << "Ingrese distancia: " << endl;
  cin >> distancia;
  if(edad > 70 || (edad >= 18 && edad <= 70 && distancia > 500)){
    cout << "Esta exento de votar" << endl;
  }else{
    cout << "No esta exento de votar" << endl;
  }
  
  system("pause");
  return 0;
}