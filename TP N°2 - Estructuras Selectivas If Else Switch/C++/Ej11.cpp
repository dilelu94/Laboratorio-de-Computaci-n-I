///Ejercicio: Ej11IngresarCincoNumerosYContarCuantosSonPositivos
//Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  int num1, num2, num3, num4, num5, contadorPositivos = 0;
  cout << "Ingrese el primer numero: " << endl;
  cin >> num1;
  cout << "Ingrese el segundo numero: " << endl;
  cin >> num2;
  cout << "Ingrese el tercer numero: " << endl;
  cin >> num3;
  cout << "Ingrese el cuarto numero: " << endl;
  cin >> num4;
  cout << "Ingrese el quinto numero: " << endl;
  cin >> num5;
  if (num1 > 0){
    contadorPositivos++;
  }
  if (num2 > 0){
    contadorPositivos++;
  }
  if (num3 > 0){
    contadorPositivos++;
  }
  if (num4 > 0){
    contadorPositivos++;
  }
  if (num5 > 0){
    contadorPositivos++;
  }
  cout << "La cantidad de numeros positivos es: " << contadorPositivos << endl;

  system("pause");
  return 0;
}