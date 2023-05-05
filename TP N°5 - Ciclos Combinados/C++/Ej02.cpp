/// Ejercicio: Ej02IngresarDiezGruposDeNumerosCadaGrupoSeSeparaConUnCero
/// Autor: Diego Leonel Luque
/// Fecha: 05/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  a) Para cada uno de los grupos el máximo de los números pares y el máximo de los números impares.
  b) Para cada uno de los grupos el porcentaje de números negativos y números positivos.
  c) Cuantos números positivos había en total entre los 10 grupos.
  */
  int positivosTotales = 0;
  for (int grupo = 1; grupo <= 10; grupo++)
  {
    int numero = 1, maximoPar = 0, maximoImpar = 0, contadorDePositivos = 0, contadorDeNegativos = 0;
    float porcentajeDePositivos, porcentajeDeNegativos;
    while (numero != 0)
    {
      cout << "Ingrese un numero: ";
      cin >> numero;
      if (numero % 2 == 0)
      {
        if (maximoPar == 0 && numero != 0)
        {
          maximoPar = numero;
        }
        else if (numero > maximoPar && numero != 0)
        {
          maximoPar = numero;
        }
      }
      else if (maximoImpar == 0)
      {
        maximoImpar = numero;
      }
      else if (numero > maximoImpar)
      {
        maximoImpar = numero;
      }
      if (numero > 0)
      {
        contadorDePositivos++;
      }
      else if (numero < 0)
      {
        contadorDeNegativos++;
      }
    }
    positivosTotales += contadorDePositivos;
    porcentajeDePositivos = (contadorDePositivos * 100) / (contadorDePositivos + contadorDeNegativos);
    porcentajeDeNegativos = (contadorDeNegativos * 100) / (contadorDePositivos + contadorDeNegativos);
    cout << "El maximo de los numeros pares es: " << maximoPar << endl;
    cout << "El maximo de los numeros impares es: " << maximoImpar << endl;
    cout << "El porcentaje de numeros positivos es: " << porcentajeDePositivos << endl;
    cout << "El porcentaje de numeros negativos es: " << porcentajeDeNegativos << endl;
  }
  cout << "La cantidad de numeros positivos es: " << positivosTotales << endl;

  system("pause");
  return 0;
}
