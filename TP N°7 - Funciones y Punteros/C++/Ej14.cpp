/// Ejercicio: Ej14FuncionQueRecibaUnVectorDeTamanioTYDosPosicionesIYJEIntercambieLosValoresDeEsasPosiciones
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

void vectorIntercambiado(int v[], int tam, int pos1, int pos2)
{
  int i, aux;
  for (i = 0; i < tam; i++)
  {
    if (i == pos1)
    {
      aux = v[i];
      v[i] = v[pos2];
    }
    else if (i == pos2)
    {
      v[i] = aux;
    }
  }
  
  for (i = 0; i < tam; i++)
  {
    cout << v[i] << " ";
  }  

  return;
}

int main()
{
  int vector[5] = {1, 2, 3, 4, 5}; // 1, 4 , 3, 2, 5

  vectorIntercambiado(vector, 5, 1, 3);
  
  system("pause");
  return 0;
}
