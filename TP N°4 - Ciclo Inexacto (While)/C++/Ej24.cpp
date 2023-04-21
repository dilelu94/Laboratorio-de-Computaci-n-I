/// Ejercicio: Ej24IngresarUnNumeroEInformarSiEsUnNumeroPerfectoONo
/// Autor: Diego Leonel Luque
/// Fecha: 10/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numero;
  int suma = 0;
  cout << "Ingrese un numero: ";
  cin >> numero;
  for (int i = 1; i < numero; i++)
  {
    if (numero % i == 0)
    {
      suma = suma + i;
    }
  }
  if (suma == numero)
  {
    cout << "El numero es perfecto" << endl;
  }
  else
  {
    cout << "El numero no es perfecto" << endl;
  }

  system("pause");
  return 0;
}
