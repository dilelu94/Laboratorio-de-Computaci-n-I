///Ejercicio: Ej11IngresarUnaListaDe10NumerosInformarElMaximoYElMinimo
///Autor: Diego Leonel Luque
///Fecha: 09/04/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

  int lista[10];
  int maximo = -2147483647 - 1;
  int minimo = 2147483647;

  cout << "Ingrese 10 numeros: " << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese el elemento " << i + 1 << " de la lista: ";
    cin >> lista[i];
  }

  for (int i = 0; i < 10; i++)
  {
    if (lista[i] > maximo)
    {
      maximo = lista[i];
    }
    if (lista[i] < minimo)
    {
      minimo = lista[i];
    }
  }

  cout << "El maximo es: " << maximo << endl;
  cout << "El minimo es: " << minimo << endl;
  
  system("pause");
  return 0;
}