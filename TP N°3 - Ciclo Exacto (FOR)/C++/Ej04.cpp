/// Ejercicio: Ej04IngresarUnNumeroYMostrarLosNumerosEntreEl1YElNumeroIngresado
/// Autor: Diego Leonel Luque
/// Fecha: 08/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  contador con un ciclo for del 20 al 1
  */
  int contador = 1;
  int numero;

  cout << "Ingrese un numero: ";
  cin >> numero;

  for (contador; contador < numero; contador++)
  {
    cout << contador << endl;
  }

  system("pause");
  return 0;
}