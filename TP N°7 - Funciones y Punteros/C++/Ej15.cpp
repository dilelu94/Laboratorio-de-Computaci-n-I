/// Ejercicio: Ej15FuncionQueRecibaUnVectorDeTamanioTYRetorne1SiElVectorEstaOrdenadoDeMenorAMayorOUn0SiNoLoEsta
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int vectorOrdenado(int v[], int tam)
{
  int i, ordenado = 1;
  for (i = 0; i < tam - 1; i++)
  {
    if (v[i] > v[i + 1])
    {
      ordenado = 0;
    }
  }
  
  return ordenado;
}

int main()
{
  int vector[5] = {1, 4, 3, 2, 5}; // 1, 4 , 3, 2, 5 = 0

  cout << vectorOrdenado(vector, 5) << endl;
  
  system("pause");
  return 0;
}
