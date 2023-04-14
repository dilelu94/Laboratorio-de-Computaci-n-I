/// Ejercicio: Ej22IngresarUnNumeroEInformarLaCantidadDeDivisoresDeEseNumero
/// Autor: Diego Leonel Luque
/// Fecha: 10/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numero;
  int divisores;
  cout << "Ingrese un numero: ";
  cin >> numero;
  for (int i = 1; i <= numero; i++)
  {
    if (numero % i == 0)
    {
      divisores++;
    }
  }
  cout << "La cantidad de divisores es: " << divisores << endl;

  system("pause");
  return 0;
}
