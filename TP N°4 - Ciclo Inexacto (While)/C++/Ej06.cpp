/// Ejercicio: EjIngresarUnaListaDeNumerosQueFinalizaCuandoSeIngresaUnCeroEInformarCuantosSonPositivosYNegativos
/// Autor: Diego Leonel Luque
/// Fecha: 21/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numero;
  int contadorPositivos = 0;
  int contadorNegativos = 0;
  while (numero != 0)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero > 0)
    {
      contadorPositivos++;
    }
    else if (numero < 0)
    {
      contadorNegativos++;
    }
  }
  cout << "La cantidad de numeros positivos es: " << contadorPositivos << endl;
  cout << "La cantidad de numeros negativos es: " << contadorNegativos << endl;

  system("pause");
  return 0;
}
