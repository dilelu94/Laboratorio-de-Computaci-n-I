/// Ejercicio: Ej10IngresarUnaListaDe10NumerosInformarElMaximoYLaPosicionDelMaximo
/// Autor: Diego Leonel Luque
/// Fecha: 09/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

  int posicion, numero, numeroMaximo, posicionDelMaximo;

  cout << "Ingrese 10 numeros: " << endl;
  for (posicion = 1; posicion <= 10; posicion++)
  {
    cout << "Ingrese el numero " << posicion << ": ";
    cin >> numero;
    if (posicion == 1)
    {
      numeroMaximo = numero;
    }
    else
    {
      if (numero > numeroMaximo)
      {
        numeroMaximo = numero;
        posicionDelMaximo = posicion;
      }
    }
  }

  cout << "El numero maximo es: " << numeroMaximo << endl;
  cout << "La posicion del numero maximo es: " << posicionDelMaximo << endl;

  cout << endl;
  system("pause");
  return 0;
}
