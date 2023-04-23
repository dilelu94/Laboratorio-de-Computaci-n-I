/// Ejercicio: Ej21IngresarNumerosHastaIngresarCeroEInformarElPrimerNumeroParIngresadoYSuUbicacionEnLaListaYElUltimoDeLosNumerosPrimosYSuUbicacion
/// Autor: Diego Leonel Luque
/// Fecha: 22/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  1er numero par y ubicacion
  ultimo numero primo y ubicacion
  */
  int primerNumeroPar, ultimoNumeroPrimo;
  int ubicacionPar = 1, ubicacionPrimo = 1, ubicacion = 1, divisores = 1, numero = 1, divisoresEncontrados = 0;
  bool primerNumeroParEncontrado = false;

  while (numero != 0)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0 && numero != 0 && primerNumeroParEncontrado == false)
    {
      primerNumeroPar = numero;
      ubicacionPar = ubicacion;
      primerNumeroParEncontrado = true;
    }

    while (divisores <= numero)
    {
      if (numero % divisores == 0)
      {
        divisoresEncontrados++;
      }
      divisores++;
    }

    if (divisoresEncontrados == 2 && numero != 0)
    {
      ultimoNumeroPrimo = numero;
      ubicacionPrimo = ubicacion;
    }

    divisores = 1;
    divisoresEncontrados = 0;
    ubicacion++;
  }

  cout << "El primer numero par es: " << primerNumeroPar << " y su ubicacion es: " << ubicacionPar << endl;
  cout << "El ultimo numero primo es: " << ultimoNumeroPrimo << " y su ubicacion es: " << ubicacionPrimo << endl;

  system("pause");
  return 0;
}
