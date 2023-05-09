/// Ejercicio: Ej03IngresarDiezGruposDeNumerosEnterosCadaGrupoSeSeparaConUnCero
/// Autor: Diego Leonel Luque
/// Fecha: 05/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  a) El número de grupo con mayor porcentaje de números impares positivos respecto al total
  de números que forman el grupo.
  b) Para cada grupo el último número primo y en qué orden apareció en ese grupo, si en un
  grupo no hubiera números primos informarlo con un cartel aclaratorio.
  c) Informar cuantos grupos están formados por todos números ordenados de mayor a
  menor
  */
  int grupoConMayorPorcentajeDeImparesPositivos = 0, contadorDeGruposOrdenados = 0;
  for (int grupo = 1; grupo <= 10; grupo++)
  {
    int numero = 1, numeroAnterior = 0, contadorDeImparesPositivos = 0, ultimoNumeroPrimo = 0, ordenPrimo = 0, ordenDeGrupo = 0;
    bool numerosOrdenados = false;
    float porcentajeDeImparesPositivos = 0;
    while (numero != 0)
    {
      cout << "Ingrese un numero: ";
      cin >> numero;
      ordenDeGrupo++;
      if (numero > 0 && numero % 2 != 0 && numero != 0)
      {
        contadorDeImparesPositivos++;
      }

      if (numero > 1)
      {
        int contadorDeDivisores = 0;
        for (int divisor = 2; divisor < numero; divisor++)
        {
          if (numero % divisor == 0)
          {
            contadorDeDivisores++;
          }
        }
        if (contadorDeDivisores == 0)
        {
          ultimoNumeroPrimo = numero;
          ordenPrimo = ordenDeGrupo;
        }
      }

      if (numero < numeroAnterior && numero != 0 && numeroAnterior != 0)
      {
        numerosOrdenados = true;
      }

      numeroAnterior = numero;
    }
    porcentajeDeImparesPositivos = (contadorDeImparesPositivos * 100) / (ordenDeGrupo - 1);
    if (porcentajeDeImparesPositivos > grupoConMayorPorcentajeDeImparesPositivos)
    {
      grupoConMayorPorcentajeDeImparesPositivos = grupo;
    }
    if (numerosOrdenados == true)
    {
      contadorDeGruposOrdenados++;
    }
    if (ultimoNumeroPrimo == 0)
    {
      cout << "No hubo numeros primos en este grupo." << endl;
    }
    else
    {
      cout << "El ultimo numero primo es: " << ultimoNumeroPrimo << " y aparecio en el orden: " << ordenPrimo << endl;
    }

  }
  cout << "La cantidad de grupos con numeros ordenados son: " << contadorDeGruposOrdenados << endl;
  cout << "El grupo con mayor porcentaje de numeros impares positivos es: " << grupoConMayorPorcentajeDeImparesPositivos << endl;

  system("pause");
  return 0;
}
