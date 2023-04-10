/// Ejercicio: Ej02MostrarPorPantallaLosNumerosDelUnoAl20SaltandoDeTresEnTres
/// Autor: Diego Leonel Luque
/// Fecha: 08/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  contador con un ciclo del 1 al 20 arranca en el uno termina en el 20
  */
  int contador;
  contador = 1;
  do
  {
    cout << contador << endl;
    contador = contador + 3;
  } while (contador < 20);

  system("pause");
  return 0;
}