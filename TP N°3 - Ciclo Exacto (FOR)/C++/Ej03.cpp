/// Ejercicio: Ej03MostrarPorPantallaLosNumerosDelVeinteAlUno
/// Autor: Diego Leonel Luque
/// Fecha: 08/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  ciclo for con un ciclo del 20 al 1
  */
  int contador;
  contador = 20;
  for (contador; contador >= 1; contador--)
  {
    cout << contador << endl;
  }

  system("pause");
  return 0;
}