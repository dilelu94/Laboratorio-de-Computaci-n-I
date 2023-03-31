///Ejercicio: Ej15IngresarDiaMesAñoDeNacimientoEIngresarDiaMesAñoActualCalcularEdadEnAños
///Autor: Diego Leonel Luque
///Fecha: 31/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  int diaNacimiento, mesNacimiento, anioNacimiento, diaActual, mesActual, anioActual, edad;
  cout << "Ingrese dia de nacimiento: ";
  cin >> diaNacimiento;
  cout << "Ingrese mes de nacimiento: ";
  cin >> mesNacimiento;
  cout << "Ingrese año de nacimiento: ";
  cin >> anioNacimiento;
  cout << "Ingrese dia actual: ";
  cin >> diaActual;
  cout << "Ingrese mes actual: ";
  cin >> mesActual;
  cout << "Ingrese año actual: ";
  cin >> anioActual;
  if (diaActual >= diaNacimiento && mesActual >= mesNacimiento){
    edad = anioActual - anioNacimiento;
  }else{
    edad = anioActual - anioNacimiento - 1;
  }
  cout << "La edad es: " << edad << endl;

  system("pause");
  return 0;
}