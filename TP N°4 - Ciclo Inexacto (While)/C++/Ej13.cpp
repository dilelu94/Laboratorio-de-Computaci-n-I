/// Ejercicio: Ej13IngresarUnaListaDeDiezNumerosInformarElMaximoDeLosPares
/// Autor: Diego Leonel Luque
/// Fecha: 09/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

  int lista[10];
  int maximoPar = 0;
  cout << "Ingrese 10 numeros: " << endl;
  for (int i = 0; i < 10; i++)
  {
    cin >> lista[i];
  }

  for (int i = 0; i < 10; i++)
  {
    if (i == 0)
    {
      maximoPar = lista[i];
    }
    else if (lista[i] % 2 == 0)
    {
      if (lista[i] > maximoPar)
      {
        maximoPar = lista[i];
      }
    }
  }

  cout << "El maximo de los pares es: " << maximoPar << endl;

  cout << endl;
  system("pause");
  return 0;
}