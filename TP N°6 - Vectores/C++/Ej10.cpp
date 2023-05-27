/// Ejercicio: Ej10IngresarDiesNumerosEInformararCantidadYNumerosPrimos
/// Autor: Diego Leonel Luque
/// Fecha: 25/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numeros[10];
  int contadorPrimos = 0;

  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
  }
  
  for (int i = 0; i < 10; i++)
  {
    int contadorDivisores = 0;
    for (int j = 1; j <= numeros[i]; j++)
    {
      if (numeros[i] % j == 0)
      {
        contadorDivisores++;
      }
    }
    if (contadorDivisores == 2)
    {
      contadorPrimos++;
      cout << "El numero " << numeros[i] << " es primo." << endl;
    }
  }

  cout << "La cantidad de numeros primos es: " << contadorPrimos << endl;
  
  system("pause");
  return 0;
}
