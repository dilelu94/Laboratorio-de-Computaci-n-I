///Ejercicio: Ej12IngresarUnaListaDe10NumerosInformarElMaximoDeLosNegativosYElMinimoDeLosPositivos
///Autor: Diego Leonel Luque
///Fecha: 09/04/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

  int lista[10];
  int maximoNegativo = -2147483647 - 1;
  int minimoPositivo = 2147483647;

  cout << "Ingrese 10 numeros: " << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese el elemento " << i + 1 << " de la lista: ";
    cin >> lista[i];
  }

  for (int i = 0; i < 10; i++)
  {
    if (lista[i] < 0)
    {
      if (lista[i] > maximoNegativo)
      {
        maximoNegativo = lista[i];
      }
    }
    else
    {
      if (lista[i] < minimoPositivo)
      {
        minimoPositivo = lista[i];
      }
    }
  }

  if (maximoNegativo == -2147483647 - 1)
  {
    cout << "No se ingresaron numeros negativos" << endl;
  }
  else
  {
    cout << "El maximo de los negativos es: " << maximoNegativo << endl;
  }

  if (minimoPositivo == 2147483647)
  {
    cout << "No se ingresaron numeros positivos" << endl;
  }
  else
  {
    cout << "El minimo de los positivos es: " << minimoPositivo << endl;
  }
  
  cout<<endl;
  system("pause");
  return 0;
}