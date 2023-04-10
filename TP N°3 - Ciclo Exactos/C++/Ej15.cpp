/// Ejercicio: Ej15IngresarUnaListaDeSieteNumerosYMostrarElPrimerYUltimoNumeroImparIngresado
/// Autor: Diego Leonel Luque
/// Fecha: 10/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

  int lista[7];
  int primerImpar = 0;
  int ultimoImpar = 0;
  cout << "Ingrese 7 numeros: " << endl;
  for (int i = 0; i < 7; i++)
  {
    cin >> lista[i];
    if (lista[i] % 2 != 0)
    {
      ultimoImpar = lista[i];
    }
  }

  for (int i = 0; i < 7; i++)
  {
    if (lista[i] % 2 != 0)
    {
      primerImpar = lista[i];
      break; // exit the loop once the first odd number is found
    }
  }

  if (primerImpar != 0)
  {
    cout << "El primer numero impar es: " << primerImpar << endl;
    cout << "El ultimo numero impar es: " << ultimoImpar << endl;
  }
  else
  {
    cout << "No se ingresaron numeros impares." << endl;
  }

  cout << endl;
  system("pause");
  return 0;
}