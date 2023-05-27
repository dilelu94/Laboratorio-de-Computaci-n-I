/// Ejercicio: Ej11IngresarCincoNumerosYArmarUnVectorDeNueveElementosEIntercalarElPromedioPorCadaDosNumerosEntreMedio
/// Autor: Diego Leonel Luque
/// Fecha: 25/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  Ej: 2, 4, 6, 8, 10. El vector queda: 2, 3, 4, 5, 6, 7, 8, 9, 10.
  */
  float numeros[5];
  float numerosInterpolados[9];
  float promedio = 0;
  float suma = 0;
  for (int i = 0; i < 5; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
  }

  for (int i = 0; i < 5; i++)
  {
    numerosInterpolados[i * 2] = numeros[i];

    if (i < 4)
    {
      int promedio = (numeros[i] + numeros[i + 1]) / 2;
      numerosInterpolados[i * 2 + 1] = promedio;
    }
  }

  for (int i = 0; i < 9; i++)
  {
    cout << "Indice: " << i << " es Numero: " << numerosInterpolados[i] << endl;
  }

  system("pause");
  return 0;
}
