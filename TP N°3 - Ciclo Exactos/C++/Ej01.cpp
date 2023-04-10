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

  contador con un ciclo del 1 al 10
  */
  int contador;
  contador = 0;
  do
  {
    contador = contador + 1;
    cout << contador << endl;
  } while (contador < 10);

  system("pause");
  return 0;
}