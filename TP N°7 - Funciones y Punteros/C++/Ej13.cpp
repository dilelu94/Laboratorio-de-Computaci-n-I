/// Ejercicio: Ej13FuncionQueRecibaUnVectorDeTamanioTYRetorneElMayorValorYSuPosicion
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

void maximoVector(int v[], int tam);

int main()
{
  int vector[5] = {1, 2, 5, 4, 3}; // val 5 pos 3

  maximoVector(vector, 5);
  
  system("pause");
  return 0;
}

void maximoVector(int v[], int tam)
{
  int i, posMax = 0, valMax = v[0];
  for (i = 1; i < tam; i++)
  {
    if (v[i] > v[posMax])
    {
      posMax = i;
      valMax = v[i];
    }
  }
  
  cout << "El valor maximo es: " << valMax << " y su posicion es: " << posMax << endl;
  return;
}