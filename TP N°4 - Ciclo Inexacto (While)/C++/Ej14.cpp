/// Ejercicio: Ej14IngresarNumerosHastaIngresarUnCeroEInformarPosicionDelPrimerYSegundoNumeroImparIngresado
/// Autor: Diego Leonel Luque
/// Fecha: 21/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numero = 1, posicion = 0, posicionPrimerImpar = 0, posicionSegundoImpar = 0;
  bool segundoImparEncontrado = false;

  while (numero != 0)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;
    posicion++;

    if (numero % 2 != 0)
    {
      if (posicionPrimerImpar == 0)
      {
        posicionPrimerImpar = posicion;
      }
      else
      {
        if (segundoImparEncontrado == false)
        {
          posicionSegundoImpar = posicion;
          segundoImparEncontrado = true;
        }
      }
    }
  }

  cout << "La posicion del primer numero impar es: " << posicionPrimerImpar << endl;
  cout << "La posicion del segundo numero impar es: " << posicionSegundoImpar << endl;
    
  system("pause");
  return 0;
}
