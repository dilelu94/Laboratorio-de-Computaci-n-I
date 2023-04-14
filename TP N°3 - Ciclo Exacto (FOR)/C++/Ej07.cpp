/// Ejercicio: Ej07IngresarIngresarUnaListaDeVeinteNumerosInformarCuantosSonPositivosNegativosYCero
/// Autor: Diego Leonel Luque
/// Fecha: 09/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*


  */
  int lista[20];
  int positivos = 0;
  int negativos = 0;
  int ceros = 0;
  for (int i = 0; i < 20; i++)
  {
    cout << "Ingrese el elemento " << i + 1 << " de la lista: ";
    cin >> lista[i];
  }
  for (int i = 0; i < 20; i++)
  {
    if (lista[i] > 0)
    {
      positivos++;
    }
    else if (lista[i] < 0)
    {
      negativos++;
    }
    else
    {
      ceros++;
    }
  }
  cout << "La cantidad de elementos positivos es: " << positivos << endl;
  cout << "La cantidad de elementos negativos es: " << negativos << endl;
  cout << "La cantidad de elementos ceros es: " << ceros << endl;
  cout << endl;
  system("pause");
  return 0;
}