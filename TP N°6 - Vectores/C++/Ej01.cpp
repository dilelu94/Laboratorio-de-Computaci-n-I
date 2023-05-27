/// Ejercicio: Ej01IngresarDiezNumerosEInformarLaSuma
/// Autor: Diego Leonel Luque
/// Fecha: 25/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float numeros[10];
  float suma = 0;
  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
  }
  for (int i = 0; i < 10; i++)
  {
    suma += numeros[i];
  }
  cout << "La suma de los numeros ingresados es: " << suma << endl;

  system("pause");
  return 0;
}
