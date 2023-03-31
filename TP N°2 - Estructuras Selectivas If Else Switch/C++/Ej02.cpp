///Ejercicio: IngresarDosNumerosInformarSiElPrimerNumeroEsMultiploDelSegundo
///Autor: Diego Leonel Luque
///Fecha: 30
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  int num1, num2;
  cout << "Ingrese el primer numero: " << endl;
  cin >> num1;  
  cout << "Ingrese el segundo numero: " << endl;
  cin >> num2;
  if (num2 % num1 == 0){
    cout << "El primer numero es multiplo del segundo" << endl;
  }

  system("pause");
  return 0;
}