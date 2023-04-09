/// Ejercicio: Ej09IngresarUnaListaDe10NumerosInformarElMaximo
/// Autor: Diego Leonel Luque
/// Fecha: 09/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

  int lista[10];
  int maximo = -2147483648; // Maximo valor negativo posible(supuestamente?)

  cout << "Ingrese 10 numeros: " << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese el elemento " << i + 1 << " de la lista: ";
    cin >> lista[i];
  }

  for (int i = 0; i < 10; i++)
  {
    if (lista[i] > maximo)
    {
      maximo = lista[i];
    }
  }

  cout << "El maximo es: " << maximo << endl;

  cout << endl;
  system("pause");
  return 0;
}