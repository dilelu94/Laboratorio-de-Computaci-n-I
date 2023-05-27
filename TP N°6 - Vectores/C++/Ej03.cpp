/// Ejercicio: Ej03IngresarDiezNumerosEInformarLosValoresMayoresAlPromedio
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
  float promedio = 0;
  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
  }
  for (int i = 0; i < 10; i++)
  {
    suma += numeros[i];
  }
  promedio = suma / 10;
  for (int i = 0; i < 10; i++)
  {
    if (numeros[i] > promedio)
    {
      cout << "El numero " << numeros[i] << " es mayor al promedio." << endl;
    }
  }
  
  system("pause");
  return 0;
}
