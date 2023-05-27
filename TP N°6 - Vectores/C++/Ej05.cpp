/// Ejercicio: Ej05IngresarVeinteNumerosEnterosEInformarSiEstaOrdenadoDeMenorAMayor
/// Autor: Diego Leonel Luque
/// Fecha: 25/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  Ordenado = Esta ordenado estrictamente.
  */
  int numeros[20];
  bool ordenado = true;
  for (int i = 0; i < 20; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
  }
  for (int i = 0; i < 20; i++)
  {
    if (numeros[i] > numeros[i + 1])
    {
      ordenado = false;
    }
  }
  if (ordenado)
  {
    cout << "Esta ordenado estrictamente." << endl;
  }
  else
  {
    cout << "NO." << endl;
  }
  
  system("pause");
  return 0;
}
