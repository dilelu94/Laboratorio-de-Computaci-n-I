///Ejercicio: Ej03IngresarUnNumeroInformarSiEsParOImpar
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  int num;
  cout << "Ingrese un numero: " << endl;
  cin >> num;
  if (num % 2 == 0){
    cout << "El numero es par" << endl;
  } else {
    cout << "El numero es impar" << endl;
  }
    
  system("pause");
  return 0;
}