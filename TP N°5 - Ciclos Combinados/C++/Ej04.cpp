/// Ejercicio: Ej04IngresarEnterosDiferentesHastaIngresarUnCeroInformarSiSolamenteLosPrimosEstanOrdenadosDeMenorAMayor
/// Autor: Diego Leonel Luque
/// Fecha: 08/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  solo verificar el orden de los primos, los otros no importan, creo.
  */
  int numero = 1, numeroPrimoAnterior = 0, ultimoNumeroPrimo = 0;
  bool numerosOrdenados = true;
  while (numero != 0)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;

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
        if (ultimoNumeroPrimo < numeroPrimoAnterior)
        {
          numerosOrdenados = false;
        }
        numeroPrimoAnterior = numero;
      }
    }

  }

  if (numerosOrdenados == true)
  {
    cout << "Ordenados." << endl;
  }
  else
  {
    cout << "Desordenados." << endl;
  }
  
  
  system("pause");
  return 0;
}
