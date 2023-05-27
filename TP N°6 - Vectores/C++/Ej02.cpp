/// Ejercicio: Ej02IngresarDiezNumerosEInformarElValorMaximoYSuPosicionDentroDelVector
/// Autor: Diego Leonel Luque
/// Fecha: 25/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float numeros[10];
  float maximo = 0;
  float posicion = 0;
  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
  }
  for (int i = 0; i < 10; i++)
  {
    if (numeros[i] > maximo)
    {
      maximo = numeros[i];
      posicion = i;
    }
  }
  cout << "El numero maximo es: " << maximo << endl;
  cout << "Su posicion es: " << posicion << endl;
  
  system("pause");
  return 0;
}
