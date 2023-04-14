/// Ejercicio: Ej21IngresarUnNumeroEInformarTodosLosDivisoresParesDelMismo
/// Autor: Diego Leonel Luque
/// Fecha: 10/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numero;
  int divisor[0];
  cout << "Ingrese un numero: ";
  cin >> numero;
  for (int i = 1; i <= numero; i++)
  {
    if (numero % i == 0)
    {
      divisor[i] = i;
      if (divisor[i] % 2 == 0)
      {
        cout << divisor[i] << endl;
      }
    }
  }
  
  system("pause");
  return 0;
}
