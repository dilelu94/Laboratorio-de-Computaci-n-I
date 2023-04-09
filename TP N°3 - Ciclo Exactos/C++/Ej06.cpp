/// Ejercicio: Ej06IngresarIndexDeUnaListaYValoresDeLosElementosDeLaLista
/// Autor: Diego Leonel Luque
/// Fecha: 08/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;

int main()
{
  /*
  Ingresar index(N) de una lista y los valores de la lista
  */

  int N;
  cout << "Ingrese la cantidad de objetos de la lista: ";
  cin >> N;

  int lista[N]; // arreglo para almacenar los objetos de la lista

  // i se inicializa en 0, se ejecuta el ciclo mientras i sea menor a N y se incrementa i en 1
  for (int i = 0; i < N; i++)
  {
    cout << "Ingrese el elemento " << i + 1 << " de la lista: ";
    cin >> lista[i];
  }

  // Imprimir solo los elementos positivos de la lista
  cout << "Los elementos positivos de la lista son: ";
  for (int i = 0; i < N; i++)
  {
    if (lista[i] > 0)
      cout << lista[i] << " ";
  }

  system("pause");
  return 0;
}