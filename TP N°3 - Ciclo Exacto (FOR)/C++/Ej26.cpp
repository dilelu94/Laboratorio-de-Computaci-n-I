/// Ejercicio: Ej26IngresarUnaListaDe!0NumerosEInformarCantidadDeDuplasDeNumerosImpares
/// Autor: Diego Leonel Luque
/// Fecha: 10/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numeros[10];
  int count = 0;

  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
  }

  // Conteo de duplas consecutivas impares
  for (int i = 0; i < 9; i++)
  {
    if (numeros[i] % 2 != 0 && numeros[i + 1] % 2 != 0)
    {
      count++;
    }
  }

  cout << "La cantidad de duplas de numeros impares consecutivos es: " << count << endl;

  system("pause");
  return 0;
}
