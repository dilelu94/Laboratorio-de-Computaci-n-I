/// Ejercicio: Ej20IngresarUnNumeroEInformarCadaUnoDeLosDivisoresDeEseNumero
/// Autor: Diego Leonel Luque
/// Fecha: 10/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numero;
  int divisor[numero];
  cout << "Ingrese un numero: ";
  cin >> numero;
  for (int i = 1; i <= numero; i++)
  {
    if (numero % i == 0)
    {
      divisor[i] = i;
      cout << divisor[i] << endl;
    }
  }

  system("pause");
  return 0;
}
