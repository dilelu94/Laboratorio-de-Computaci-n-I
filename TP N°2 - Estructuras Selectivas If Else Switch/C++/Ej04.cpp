///Ejercicio: Ej04IngresarDosNumerosEInformarLaDiferenciaAbsolutaEntreEllos
///Autor: Diego Leonel Luque
///Fecha: 30
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  int num1, num2;
  cout << "Ingrese un numero: " << endl;
  cin >> num1;
  cout << "Ingrese otro numero: " << endl;
  cin >> num2;
  if (num1 > num2){
    cout << "La diferencia absoluta entre los numeros es: " << num1 - num2 << endl;
  } else {
    cout << "La diferencia absoluta entre los numeros es: " << num2 - num1 << endl;
  }

  system("pause");
  return 0;
}