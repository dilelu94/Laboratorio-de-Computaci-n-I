/// Ejercicio: Ej12FuncionQueRecibaUnVectorDeTamanioTYRetorneLaSumaDeSusValores
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int sumarVector(int v[], int tam);

int main()
{
  int vector[5] = {1, 2, 3, 4, 5}; // 15

  cout << "La suma de los valores del vector es: " << sumarVector(vector, 5) << endl;

  system("pause");
  return 0;
}

int sumarVector(int v[], int tam)
{
  int i, suma = 0;
  for (i = 0; i < tam; i++)
  {
    suma += v[i];
  }
  return suma;
}