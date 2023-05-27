/// Ejercicio: Ej11FuncionQueRecibaUnNumeroYDevuelva1SiEsPrimoY0SiNoLoEs
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int esPrimo(int num)
{
  int i, cont = 0;
  for (i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      cont++;
    }
  }
  if (cont == 2)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  /*
  Hacer un programa para que dada una lista de números que finaliza con cero informa 
  cuántos de ellos eran primos, utilizar la función anterior.
  */

  int numero, primos = 0;

  cout << "Ingrese un numero: ";
  cin >> numero;
  while (numero != 0)
  {
    if (esPrimo(numero) == 1)
    {
      primos++;
    }

    cout << "Ingrese un numero: ";
    cin >> numero;
  }

  cout << "Cantidad de numeros primos: " << primos << endl;
  
  system("pause");
  return 0;
}
