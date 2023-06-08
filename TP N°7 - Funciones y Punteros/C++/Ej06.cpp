/// Ejercicio: Ej06FuncionQueRecibaDosNumerosYRetorneLaSumaYelProducto
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

void sumaYProducto(float num1, float num2);

int main()
{
  float numero1, numero2;
  
  cout << "Ingrese un numero: ";
  cin >> numero1;
  cout << "Ingrese otro numero: ";
  cin >> numero2;

  sumaYProducto(numero1, numero2);
  
  system("pause");
  return 0;
}

// 6) Escribir una función que reciba dos números y retorne la suma y el producto de ambos. 
void sumaYProducto(float num1, float num2)
{
  cout << "La suma de los numeros es: " << num1 + num2 << endl;
  cout << "El producto de los numeros es: " << num1 * num2 << endl;
  return;
}

