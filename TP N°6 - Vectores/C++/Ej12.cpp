/// Ejercicio: Ej12IngresarDiezNumerosEInformarSiHayRepetidos
/// Autor: Diego Leonel Luque
/// Fecha: 25/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float numeros[10];
  bool hayRepetidos = false;
  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = i + 1; j < 10; j++)
    {
      if (numeros[i] == numeros[j])
      {
        hayRepetidos = true;
      }
    }
  }

  if (hayRepetidos)
  {
    cout << "Hay Repetidos" << endl;
  }
  
  system("pause");
  return 0;
}
