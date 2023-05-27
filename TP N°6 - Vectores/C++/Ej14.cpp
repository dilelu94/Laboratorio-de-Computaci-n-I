/// Ejercicio: Ej14IngresarDosListasDeDiezNumerosSinRepetirGuardarYMostrarSolamenteLosRepetidosEntreListas
/// Autor: Diego Leonel Luque
/// Fecha: 26/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float numeros1[10];
  float numeros2[10];
  float numerosRepetidos[10];

  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese un numero para la lista 1: ";
    cin >> numeros1[i];
  }

  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese un numero para la lista 2: ";
    cin >> numeros2[i];
  }

  for (int i = 0; i < 10; i++)
  {
    bool encontroRepetido = false;
    for (int j = 0; j < 10; j++)
    {
      if (numeros1[i] == numeros2[j])
      {
        numerosRepetidos[i] = numeros1[i];
        encontroRepetido = true;
      }
    }
    if (encontroRepetido == false)
    {
      numerosRepetidos[i] = 0;
    }
  }

  cout << "Los Numeros Repetidos Son: " << endl;
  for (int i = 0; i < 10; i++)
  {
    if (numerosRepetidos[i] != 0)
    {
      cout << numerosRepetidos[i] << endl;
    }
  }

  system("pause");
  return 0;
}
