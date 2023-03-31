///Ejercicio: Ej13IngresarTresNumerosYOrdenarlosDeMenorAMayor
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  int n1,n2,n3, tercero, segundo, primero;
  cout << "Ingrese el primer numero: " << endl;
  cin >> n1;
  cout << "Ingrese el segundo numero: " << endl;
  cin >> n2;
  cout << "Ingrese el tercer numero: " << endl;
  cin >> n3;
  if(n1>n2 && n1>n3){
    tercero = n1;
    if(n2>n3){
      segundo = n2;
      primero = n3;
    }else{
      segundo = n3;
      primero = n2;
    }
  }
  if(n2>n1 && n2>n3){
    tercero = n2;
    if(n1>n3){
      segundo = n1;
      primero = n3;
    }else{
      segundo = n3;
      primero = n1;
    }
  }
  if(n3>n1 && n3>n2){
    tercero = n3;
    if(n1>n2){
      segundo = n1;
      primero = n2;
    }else{
      segundo = n2;
      primero = n1;
    }
  }
  cout << "El orden de los numeros es: " << primero << " " << segundo << " " << tercero << endl;

  system("pause");
  return 0;
}