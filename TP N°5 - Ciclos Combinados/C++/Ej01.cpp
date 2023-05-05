/// Ejercicio: Ej01IngresarUnaListaDeDiezNumerosEInformarCuantosSonPrimos
/// Autor: Diego Leonel Luque
/// Fecha: 05/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  
  */
  int numero, contadorDeDivisores = 0, numerosPrimos = 0;
  for (int lista = 1; lista <= 10; lista++)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;
    for (int divisor = 1; divisor <= numero; divisor++)
    {
      if (numero % divisor == 0)
      {
        contadorDeDivisores++;
      }
    }
    if (contadorDeDivisores == 2)
    {
      numerosPrimos++;
    }
    contadorDeDivisores = 0;
  }

  cout << "La cantidad de numeros primos es: " << numerosPrimos << endl;
  
  system("pause");
  return 0;
}
