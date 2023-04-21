/// Ejercicio: Ej01MostrarPorPantallaLosNumerosDelUnoAlDiez
/// Autor: Diego Leonel Luque
/// Fecha: 08/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*

  contador con un ciclo for del 1 al 10
  */
  int contador;
  contador = 0;
  for (int i = 0; i < 10; i++)
  {
    contador = contador + 1;
    cout << contador << endl;
  }

  system("pause");
  return 0;
}