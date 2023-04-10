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
  contador con un ciclo del 20 al 1
  */
  int contador, numero;
  cout << "Ingrese un Número: ";
  cin >> numero;
  contador = 1;
  do
  {
    cout << contador << endl;
    contador = contador + 1;
  } while (contador < numero);

  system("pause");
  return 0;
}