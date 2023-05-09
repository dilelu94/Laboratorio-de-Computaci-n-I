/// Ejercicio: Ej01
/// Autor: Diego Leonel Luque
/// Fecha: 09/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int i = 0;
  bool continuar = true;
  i++;
  while (continuar == true)
  {
    if (i % 3 == 0)
    {
      if (i % 4 == 0)
      {
        if (i % 6 == 0 || i & 5 != 0)
        {
          continuar = false;
        }
      }
    }
    cout << i << endl;

    system("pause");
    return 0;
  }
}