///Ejercicio: Ej07IngresarTresNumerosEInformarSiLosTresSonDistintosEntreSi
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  int num1, num2, num3;
  cout << "Ingrese el primer numero: ";
  cin >> num1;
  cout << "Ingrese el segundo numero: ";
  cin >> num2;
  cout << "Ingrese el tercer numero: ";
  cin >> num3;
  if (num1 != num2 && num1 != num3 && num2 != num3){
    cout << "Los tres numeros son distintos entre si" << endl;
  }

  system("pause");
  return 0;
}