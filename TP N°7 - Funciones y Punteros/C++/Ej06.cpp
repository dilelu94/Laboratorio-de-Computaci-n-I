/// Ejercicio: Ej06FuncionQueRecibaDosNumerosYRetorneLaSumaYelProducto
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

void sumaYProducto(int num1, int num2)
{
  cout << "La suma de los numeros es: " << num1 + num2 << endl;
  cout << "El producto de los numeros es: " << num1 * num2 << endl;
  return;
}

int main()
{
  int numero1, numero2;
  
  cout << "Ingrese un numero: ";
  cin >> numero1;
  cout << "Ingrese otro numero: ";
  cin >> numero2;

  sumaYProducto(numero1, numero2);
  
  system("pause");
  return 0;
}
