/// Ejercicio: Ej19Ingresar5NumerosInformarLos2MayoresAclarandoMaximoySegundoMaximo
/// Autor: Diego Leonel Luque
/// Fecha: 10/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float numero[5];
  cout << "Ingrese cinco numeros: " << endl;
  for (int i = 0; i < 5; i++)
  {
    cin >> numero[i];
  }
  
  for (int i = 0; i < 4; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      if (numero[i] > numero[j])
      {
        float temp = numero[i];
        numero[i] = numero[j];
        numero[j] = temp;
      }
    }
  }
  
  cout << "El numero maximo es: " << numero[4] << endl;
  cout << "El segundo numero maximo es: " << numero[3] << endl;

  system("pause");
  return 0;
}
