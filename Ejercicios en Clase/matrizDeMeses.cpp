/// Ejercicio: EjMatrizQueMustreMesesYDias
/// Autor: Diego Leonel Luque
/// Fecha: 18/06/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  
  */
  int mMeses[12][31] = {0};
  int i, j;
  
  for (i = 0; i < 12; i++)
  {
    for (j = 0; j < 31; j++)
    {
      mMeses[i][j] = j + 1;
    }
  }

  for (i = 0; i < 12; i++)
  {
    cout << "Mes " << (i + 1) << endl;
    for (j = 0; j < 31; j++)
    {
      cout << mMeses[i][j] << " ";
    }
    cout << endl;
  }

  system("pause");
  return 0;
}
