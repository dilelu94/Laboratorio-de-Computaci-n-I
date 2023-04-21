/// Ejercicio: EjIngresarNumerosHastaIngresarUnCeroEInformarElMaximoYElMinimoYLaPosicionDelMaximoYDelMinimo
/// Autor: Diego Leonel Luque
/// Fecha: 21/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  
  */
  int numero, maximo = 0, minimo = 0;
  while (numero != 0)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (maximo == 0 & numero != 0)
    {
      maximo = numero;
      minimo = numero;
    }
    else if (numero > maximo & numero != 0)
    {
      maximo = numero;
    }
    else if (numero < minimo & numero != 0)
    {
      minimo = numero;
    }
  }
  cout << "El maximo es: " << maximo << endl;
  cout << "El minimo es: " << minimo << endl;

  system("pause");
  return 0;
}
