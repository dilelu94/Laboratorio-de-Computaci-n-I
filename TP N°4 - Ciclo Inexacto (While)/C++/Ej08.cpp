/// Ejercicio: Ej08IngresarNumerosHastaIngresarUnCeroEInformarElMaximoDeLosPares
/// Autor: Diego Leonel Luque
/// Fecha: 21/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numero, maximo = 0;
  while (numero != 0)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (maximo == 0 & numero != 0 & numero % 2 == 0)
    {
      maximo = numero;
    }
    else if (numero > maximo & numero != 0 & numero % 2 == 0)
    {
      maximo = numero;
    }
  }

  cout << "El maximo de los pares es: " << maximo << endl;
  
  system("pause");
  return 0;
}
