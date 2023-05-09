/// Ejercicio: Ejbool
/// Autor: Diego Leonel Luque
/// Fecha: 06/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*

  */
  int i;
  bool band = false;
  for (i = 1; i <= 10; i++)
  {
    if (i % 4 == 0)
    {
      if (band == true)
      {
        cout << i << endl;
      }
      band = true;
    }
  }

  system("pause");
  return 0;
}
