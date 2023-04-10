/// Ejercicio: EjIngresarUnaListaDeSieteNumerosEInformarElPrimerNumeroParIngresadoYSu
/// UbicacionEnLaListaYElUltimoDeLosNumerosPrimosYSuUbicacionEnLaLista
/// Autor: Diego Leonel Luque
/// Fecha: 10/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numero;
  int suma = 0;
  int divisores = 0;
  int primerPar = 0;
  int ubicacionPrimerPar = 0;
  int ultimoPrimo = 0;
  int ubicacionUltimoPrimo = 0;
  for (int i = 1; i <= 7; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero % 2 == 0 && primerPar == 0)
    {
      primerPar = numero;
      ubicacionPrimerPar = i;
    }
    for (int j = 1; j <= numero; j++)
    {
      if (numero % j == 0)
      {
        divisores++;
      }
    }
    if (divisores == 2)
    {
      ultimoPrimo = numero;
      ubicacionUltimoPrimo = i;
    }
  }
  
  cout << "El primer numero par ingresado es: " << primerPar;
  cout << ", ubicacion, " << ubicacionPrimerPar << endl;
  cout << "El ultimo numero primo ingresado es: " << ultimoPrimo;
  cout << ", ubicacion, " << ubicacionUltimoPrimo << endl;

  system("pause");
  return 0;
}
