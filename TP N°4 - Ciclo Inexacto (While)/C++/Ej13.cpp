/// Ejercicio: Ej13IngresarNumerosHastaIngresarUnCeroInformarCualEsElAnteultimoYUltimoImparIngresado
/// Autor: Diego Leonel Luque
/// Fecha: 21/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numero, anteultimo, ultimo;
  while (numero != 0)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero % 2 != 0)
    {
      anteultimo = ultimo;
      ultimo = numero;
    }
  }

  cout << "El anteultimo numero impar ingresado es: " << anteultimo << endl;
  cout << "El ultimo numero impar ingresado es: " << ultimo << endl;

  system("pause");
  return 0;
}
