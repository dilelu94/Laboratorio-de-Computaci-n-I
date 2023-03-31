///Ejercicio: Ej16IngresarAñoEIndicarSiEsBisiesto
///Autor: Diego Leonel Luque
///Fecha: 31/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
/*
es multiplo de 4 y no es multiplo de 100 o es multiplo de 400
*/
  int year;
  cout << "Ingrese un año: ";
  cin >> year;
  if(year%4==0 && year%100!=0 || year%400==0){
    cout << "El año es bisiesto" << endl;
  }else{
    cout << "El año no es bisiesto" << endl;
  }

  system("pause");
  return 0;
}