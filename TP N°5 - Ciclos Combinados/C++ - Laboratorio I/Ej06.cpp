/// Ejercicio: Ej06IngresarDiesGruposDeNumerosOrdenadosDeMenorAMayorFinalizaCadaGrupoPoniendoUnNumeroMenorAlAnterior
/// Autor: Diego Leonel Luque
/// Fecha: 10/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  Informar:
  1.- Cantidad De numeros primos por grupo.
  2.- El minimo numero par por grupo.
  3.- El anteultimo y ultimo numero positivo por grupo.
  */
  int numeroDeGrupo = 1, anteultimoPositivo = 0, ultimoPositivo = 0;
  int grupo = 1;

  for (int grupo = 1; grupo <= 10; grupo++)
  {
    int numero = 1, numeroAnterior = INT_MIN, cantidadDePrimos = 0, minimoPar = INT_MAX;
    bool numeroMenorEncontrado = false;
    while (numeroMenorEncontrado == false)
    {
      cout << "Ingrese un numero ";
      cin >> numero;
      if (numero < numeroAnterior)
      {
        numeroMenorEncontrado = true;
      }

      int divisores = 0;
      for (int divisor = 1; divisor <= numero; divisor++)
      {
        if (numero % divisor == 0)
        {
          divisores++;
        }
      }
      if (divisores == 2 && numero >= numeroAnterior)
      {
        cantidadDePrimos++;
      }

      if (numeroAnterior == 0)
      {
        numeroAnterior = numero;
      }
      else
      {
        if (numero >= numeroAnterior && numero > 0)
        {
          anteultimoPositivo = numeroAnterior;
          ultimoPositivo = numero;
        }
        numeroAnterior = numero;
      }
      if (numero % 2 == 0 && numero < minimoPar)
      {
        minimoPar = numero;
      }
    }
    cout << "El grupo tenia: " << cantidadDePrimos << " numeros primos" << endl;
    cout << "El minimo numero par fue: " << minimoPar << endl;
    cout << "El anteultimo numero positivo fue: " << anteultimoPositivo << " y el ultimo fue: " << ultimoPositivo << endl;
  }

  system("pause");
  return 0;
}
