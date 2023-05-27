/// Ejercicio: Ej08IngresarDiezNumerosEInformarCantidadDeVecesQueApareceUnNumeroIngresado
/// Autor: Diego Leonel Luque
/// Fecha: 25/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float numeros[10];
  float numero;
  int contadorApariciones = 0;

  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
  }

  cout << "Ingrese un numero para saber cuantas veces aparece en el vector: ";
  cin >> numero;

  for (int i = 0; i < 10; i++)
  {
    if (numeros[i] == numero)
    {
      contadorApariciones++;
    }
  }

  cout << "El numero " << numero << " aparece " << contadorApariciones << " veces en el vector." << endl;
  
  system("pause");
  return 0;
}
