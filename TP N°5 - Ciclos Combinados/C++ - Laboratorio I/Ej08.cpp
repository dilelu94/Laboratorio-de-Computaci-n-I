/// Ejercicio: Ej08IngresarGruposDeNumerosSeparadasPorCeroHastaIngresarDosCerosConsecutivos
/// Autor: Diego Leonel Luque
/// Fecha: 11/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  Informar:
  1.- Cantidad de grupos donde halla 4 o mas numeros primos consecutivos.
  2.- Por cada grupo el mayor y segundo mayor negativo y posicion de c/u.
  3.- "Grupo sin negativos".
  4.- Mayor numero primo de todos los grupos y a que grupo y posicion pertenece.
  */
  int numero, cantidadDeGruposConCuatroOMasPrimosConsecutivos = 0, posicionDelGrupo = 0;
  int mayorNumeroPrimo = 0, posicionEnElGrupoDelMayorNumeroPrimo = 0, grupoDelMayorNumeroPrimo = 0;
  bool dosCerosConsecutivos = false, numeroAnteriorEsCero = false, unCero = false;
  while (dosCerosConsecutivos == false)
  {
    int mayorNegativo = INT_MIN, segundoMayorNegativo = 0, posicionMayorNegativo = 0, posicionSegundoMayorNegativo = 0, posicionEnElGrupo = 0;
    int numerosPrimosConsecutivos = 0;
    bool numeroAnteriorEsPrimo = false, grupoConCuatroOMasPrimosEncontrado = false;
    posicionDelGrupo++;

    //cout << "dos ceros consecutivos es falso por ahora" << endl;
    if (unCero == true)
    {
      numeroAnteriorEsCero = true;
      unCero = false;
    }
    else
    {
      numeroAnteriorEsCero = false;
    }

    while (unCero == false)
    {
      cout << "Ingrese un numero: ";
      cin >> numero;

      if (numero == 0)
      {
        unCero = true;
        if (numeroAnteriorEsCero == true)
        {
          dosCerosConsecutivos = true;
          //cout << "dos ceros consecutivos es verdadero" << endl;
        }
        //cout << "un cero es verdadero" << endl;
      }
      else
      {
        numeroAnteriorEsCero = false;
        // logica por grupo va aca abajo
        posicionEnElGrupo++;
        // primos
        int divisores = 0;
        for (int divisor = 1; divisor <= numero; divisor++)
        {
          if (numero % divisor == 0)
          {
            divisores++;
          }
        }
        if (divisores == 2 && numero != 0)
        {
          if (numeroAnteriorEsPrimo == true)
          {
            numerosPrimosConsecutivos++;
          }
          else
          {
            numerosPrimosConsecutivos = 1;
          }
          numeroAnteriorEsPrimo = true;
          if (numero > mayorNumeroPrimo)
          {
            mayorNumeroPrimo = numero;
            posicionEnElGrupoDelMayorNumeroPrimo = posicionEnElGrupo;
            grupoDelMayorNumeroPrimo = posicionDelGrupo;
          }
        }
        else
        {
          numerosPrimosConsecutivos = 0;
          numeroAnteriorEsPrimo = false;
        }
        if (numerosPrimosConsecutivos >= 4 && grupoConCuatroOMasPrimosEncontrado == false)
        {
          cantidadDeGruposConCuatroOMasPrimosConsecutivos++;
          grupoConCuatroOMasPrimosEncontrado = true;
        }
        // fin primos

        // negativos
        if (numero < 0 && numero != 0)
        {
          if (numero > mayorNegativo)
          {
            segundoMayorNegativo = mayorNegativo;
            mayorNegativo = numero;
            posicionSegundoMayorNegativo = posicionMayorNegativo;
            posicionMayorNegativo = posicionEnElGrupo;
          }
          else if (numero > segundoMayorNegativo)
          {
            segundoMayorNegativo = numero;
            posicionSegundoMayorNegativo = posicionEnElGrupo;
          }
        }
        // fin negativos

        //cout << "un cero es falso por ahora" << endl;
      }
    }
    if (mayorNegativo == INT_MIN && dosCerosConsecutivos == false)
    {
      cout << "No hay numeros negativos" << endl;
    }
    else if (segundoMayorNegativo == INT_MIN)
    {
      cout << "El mayor numero negativo es: " << mayorNegativo << " y su posicion es: " << posicionMayorNegativo << endl;
    }
    else
    {
      cout << "El mayor numero negativo es: " << mayorNegativo << " y su posicion es: " << posicionMayorNegativo << endl;
      cout << "El segundo mayor numero negativo es: " << segundoMayorNegativo << " y su posicion es: " << posicionSegundoMayorNegativo << endl;
    }
  }
  cout << "La cantidad de grupos con numeros primos consecutivos es: " << cantidadDeGruposConCuatroOMasPrimosConsecutivos << endl;
  cout << "El mayor numero primo es: " << mayorNumeroPrimo << ", su posicion es: " << posicionEnElGrupoDelMayorNumeroPrimo << " en el grupo: " << grupoDelMayorNumeroPrimo << endl;

  system("pause");
  return 0;
}
