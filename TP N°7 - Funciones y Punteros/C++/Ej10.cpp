/// Ejercicio: Ej10FuncionQueRecibaUnNumeroYRetorne1SiElNumeroEsParY0SiEsImpar
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int parOImpar(int num);

int main()
{
  /*
  Hacer un programa para que dada una lista de números que finaliza con cero informa
  cuántos de ellos eran pares y cuantos impares, utilizar la función anterior.
 */

  int numero, pares = 0, impares = 0;

  cout << "Ingrese un numero: ";
  cin >> numero;
  while (numero != 0)
  {
    if (parOImpar(numero) == 1)
    {
      pares++;
    }
    else
    {
      impares++;
    }

    cout << "Ingrese un numero: ";
    cin >> numero;
  }
  
  cout << "Cantidad de numeros pares: " << pares << endl;
  cout << "Cantidad de numeros impares: " << impares << endl;

  system("pause");
  return 0;
}

int parOImpar(int num)
{
  if (num % 2 == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}