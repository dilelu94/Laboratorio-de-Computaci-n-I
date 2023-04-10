/// Ejercicio: EjIngresarSieteNumerosInformarAnteultimoYUltimoImparIngresado
/// Autor: Diego Leonel Luque
/// Fecha: 10/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  Ejemplo 8, 4, -5, 6, 10, 5, 18 se informa -5 y 5.
  */
  int lista[7];
  int anteultimoImpar = 0;
  int ultimoImpar = 0;
  cout << "Ingrese 7 numeros: " << endl;
  for (int i = 0; i < 7; i++)
  {
    cin >> lista[i];
    if (lista[i] % 2 != 0)
    {
      anteultimoImpar = ultimoImpar;
      ultimoImpar = lista[i];
    }
  }
  cout << "El anteultimo numero impar es: " << anteultimoImpar << endl;
  cout << "El ultimo numero impar es: " << ultimoImpar << endl;

  system("pause");
  return 0;
}
