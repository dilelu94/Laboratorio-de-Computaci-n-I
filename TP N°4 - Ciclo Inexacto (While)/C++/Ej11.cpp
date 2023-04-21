/// Ejercicio: Ej11IngresarNumerosHastaIngresarUnCeroEInformarElMaximoDeLosNegativosYElMinimoDeLosPositivosYLaPosicionDelMaximoDeLosNegativosYDelMinimoDeLosPositivos
/// Autor: Diego Leonel Luque
/// Fecha: 21/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*

  */
  int numero, maximoNegativo = 0, minimoPositivo = 0;
  while (numero != 0)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (maximoNegativo == 0 & numero != 0)
    {
      if (numero < 0 & numero != 0)
      {
        maximoNegativo = numero;
      }
    }
    else if (minimoPositivo == 0 & numero != 0)
    {
      if (numero > 0 & numero != 0)
      {
        minimoPositivo = numero;
      }
    }

    else if (numero < 0 & numero != 0)
    {
      if (numero > maximoNegativo)
      {
        maximoNegativo = numero;
      }
    }
    else if (numero > 0 & numero != 0)
    {
      if (numero < minimoPositivo)
      {
        minimoPositivo = numero;
      }
    }
  }

  cout << "El maximo de los negativos es: " << maximoNegativo << endl;
  cout << "El minimo de los positivos es: " << minimoPositivo << endl;

  system("pause");
  return 0;
}
