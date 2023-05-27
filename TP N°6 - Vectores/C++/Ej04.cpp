/// Ejercicio: Ej04IngresarDiezNumerosEIntercambiarPosicionCeroConLaPosicionNueve
/// Autor: Diego Leonel Luque
/// Fecha: 25/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float numeros[10];
  float auxiliar = 0;
  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
    if (i == 9)
    {
      auxiliar = numeros[0];
      numeros[0] = numeros[9];
      numeros[9] = auxiliar;
    }
  }
  // Imprimir el vector
  for (int i = 0; i < 10; i++)
  {
    cout << numeros[i] << endl;
  }

  
  system("pause");
  return 0;
}
