/// Ejercicio: Ej06IngresarVeinteNumerosEInformarCuantasVecesNoCumplioElOrdenCreciente
/// Autor: Diego Leonel Luque
/// Fecha: 25/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  orden no respetado = rupturas
  ej: 1,3,4,2,4,4,6,8,1,7,9 tiene 3 rupturas.
  */
  float numeros[20];
  int rupturas = 0;
  for (int i = 0; i < 20; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
  }
  for (int i = 0; i < 20; i++)
  {
    if (numeros[i] > numeros[i + 1])
    {
      rupturas++;
    }
  }
  cout << "Rupturas: " << rupturas - 1 << endl;

  system("pause");
  return 0;
}
