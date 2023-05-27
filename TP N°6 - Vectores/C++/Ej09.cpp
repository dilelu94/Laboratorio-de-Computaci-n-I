/// Ejercicio: Ej09IngresarDiezNumerosEInformarCantidadYNumerosPares
/// Autor: Diego Leonel Luque
/// Fecha: 25/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numeros[10];
  int contadorPares = 0;

  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
  }

  for (int i = 0; i < 10; i++)
  {
    if (numeros[i] % 2 == 0)
    {
      contadorPares++;
      cout << "El numero " << numeros[i] << " es par." << endl;
    }
  }
  
  cout << "La cantidad de numeros pares es: " << contadorPares << endl;
  
  system("pause");
  return 0;
}
