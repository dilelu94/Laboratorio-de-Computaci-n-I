/// Ejercicio: Ej16FuncionQueRecibaDosVectoresDeTamanio10SinNumerosRepetidosGenerarUnTercerVectorConLosElementosRepetidos
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

void vectorDeLosRepetidos(int v1[], int v2[]);

int main()
{
  int vector1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int vector2[10] = {1, 2, 3, 14, 15, 16, 17, 18, 9, 10};
  // 1, 2, 3, 9, 10

  vectorDeLosRepetidos(vector1, vector2);

  system("pause");
  return 0;
}

void vectorDeLosRepetidos(int v1[], int v2[])
{
  int k = 0, v3[10];

  for (int i = 0; i < 10; i++)
  {
    bool repetido = false;
    for (int j = 0; j < 10; j++)
    {
      if (v1[i] == v2[j])
      {
        v3[k] = v1[i];
        k++;
        repetido = true;
      }
    }
    if (!repetido)
    {
      v3[k] = 0;
      k++;
    }
  }

  for (int i = 0; i < 10; i++)
  {
    cout << v3[i] << endl;
  }
}