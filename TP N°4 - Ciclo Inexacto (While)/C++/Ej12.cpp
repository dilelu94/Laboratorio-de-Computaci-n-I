/// Ejercicio: Ej12IngresarNumerosHastaIngresarUnCeroEInformarElPrimerYUltimoNumeroImparIngresado
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
  int numero, primerNumeroImpar, ultimoNumeroImpar;
  while (numero != 0)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero % 2 != 0)
    {
      if (primerNumeroImpar == 0)
      {
        primerNumeroImpar = numero;
      }
      ultimoNumeroImpar = numero;
    }
  }
  cout << "El primer numero impar ingresado es: " << primerNumeroImpar << endl;
  cout << "El ultimo numero impar ingresado es: " << ultimoNumeroImpar << endl;

  system("pause");
  return 0;
}
