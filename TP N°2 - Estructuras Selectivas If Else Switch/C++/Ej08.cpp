///Ejercicio: Ej08IngresarTresNumerosEInformarSiEsEquilateroIsoscelesOEscaleno
///Autor: Diego Leonel Luque
///Fecha: 30
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
/*
- Equilátero: si los tres lados son iguales
- Isósceles: si dos de los tres lados son iguales
- Escaleno: si los tres lados son distintos entre sí
*/
  int lado1, lado2, lado3;
  cout << "Ingrese el primer lado: ";
  cin >> lado1;
  cout << "Ingrese el segundo lado: ";
  cin >> lado2;
  cout << "Ingrese el tercer lado: ";
  cin >> lado3;
  if (lado1 == lado2 && lado1 == lado3){
    cout << "El triangulo es Equilátero" << endl;
  } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
    cout << "El triangulo es Isósceles" << endl;
  } else {
    cout << "El triangulo es Escaleno" << endl;
  }

  system("pause");
  return 0;
}