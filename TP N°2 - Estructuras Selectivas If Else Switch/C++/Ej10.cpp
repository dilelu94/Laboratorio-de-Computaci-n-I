///Ejercicio: IngresarCincoNumerosListarElMaximoMinimoYElMaximoYElMinimo
///Autor: Diego Leonel Luque
///Fecha: 30
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  int num1,num2,num3,num4,num5;
  int max,min;
  cout << "Ingrese el primer numero: ";
  cin >> num1;
  cout << "Ingrese el segundo numero: ";
  cin >> num2;
  cout << "Ingrese el tercer numero: ";
  cin >> num3;
  cout << "Ingrese el cuarto numero: ";
  cin >> num4;
  cout << "Ingrese el quinto numero: ";
  cin >> num5;
  max = num1;
  min = num1;
  if (num2 > max){
    max = num2;
  } else if (num2 < min){
    min = num2;
  }
  if (num3 > max){
    max = num3;
  } else if (num3 < min){
    min = num3;
  }
  if (num4 > max){
    max = num4;
  } else if (num4 < min){
    min = num4;
  }
  if (num5 > max){
    max = num5;
  } else if (num5 < min){
    min = num5;
  }
  cout << "El numero maximo es: " << max << endl;
  cout << "El numero minimo es: " << min << endl;
  cout << "El numero maximo es: " << max << " y el numero minimo es: " << min << endl;

  system("pause");
  return 0;
}