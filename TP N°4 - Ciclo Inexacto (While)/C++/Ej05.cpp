/// Ejercicio: Ej05IngresarDosNumerosYMostrarLosNumerosEntreElMenorYMayorIngresados
/// Autor: Diego Leonel Luque
/// Fecha: 08/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*

  */
  int numero1, numero2, numeroMenor, numeroMayor;
  cout << "Ingrese el primer número: ";
  cin >> numero1;
  cout << "Ingrese el segundo número: ";
  cin >> numero2;

  if (numero1 > numero2)
  {
    numeroMayor = numero1;
    numeroMenor = numero2;
  }
  else
  {
    numeroMayor = numero2;
    numeroMenor = numero1;
  }

  do
  {
    numeroMenor = numeroMenor + 1;
    cout << numeroMenor << endl;
  } while (numeroMenor < numeroMayor);

  system("pause");
  return 0;
}