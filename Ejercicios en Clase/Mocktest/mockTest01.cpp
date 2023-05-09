/// Ejercicio: Ej01
/// Autor: Diego Leonel Luque
/// Fecha: 09/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int a = 9, b = 4, y, z, e;
  if (a > b)
  {
    y = b;
    z = a;
  }
  else
  {
    y = a;
    z = b;
  }
  for (e = y + 1; e < z; e++)
  {
    cout << e << endl;
  }

  cout << "Presione una tecla para continuar...";

  system("pause");
  return 0;
}
