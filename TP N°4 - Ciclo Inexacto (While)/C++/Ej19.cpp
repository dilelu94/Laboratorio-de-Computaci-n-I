/// Ejercicio: Ej19IngresarUnNumeroEInformarSiEsPrimoONo
/// Autor: Diego Leonel Luque
/// Fecha: 21/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numero, i=1, divisores = 0;

  cout << "Ingrese un numero: ";
  cin >> numero;

  while (i <= numero)
  {
    if (numero % i == 0)
    {
      divisores++;
    }
    i++;
  }
  
  if (divisores == 2)
  {
    cout << "El numero es primo" << endl;
  }
  else
  {
    cout << "El numero no es primo" << endl;
  }

  system("pause");
  return 0;
}
