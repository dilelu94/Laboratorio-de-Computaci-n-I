/// Ejercicio: Ejfoat
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
  int n1 = 5, n2 = 2;
  float res;
  res = n1 / (float) n2;
  cout << res << endl;

  //verificar si un vector esta ordenado de forma ascendente o descentende emitir true o false
  int V[3] = {6, 6, 4}; //falso
  for (int i = 0; i < 3; i++)
  {
    if (V[i] > V[i + 1] && V[i] != V[i + 1])
    {
      cout << "true" << endl;
      break;
    }
  }

  system("pause");
  return 0;
}
