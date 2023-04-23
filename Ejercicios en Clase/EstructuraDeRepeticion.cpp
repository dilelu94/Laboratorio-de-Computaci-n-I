/// Ejercicio: EstructuraDeRepeticion
/// Autor: Diego Leonel Luque
/// Fecha: 20/04/2023
/// Comentario: ejemplo de la clase

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int edad, eMax = 0;
  cout << "EDAD (0 PARA FINALIZAR): ";
  cin >> edad;
  while (edad != 0)
  {
    if (edad > eMax)
    {
      eMax = edad;
    }
    cout << "EDAD (0 PARA FINALIZAR): ";
    cin >> edad;
  }

  cout << "EDAD MAXIMA: " << eMax << endl;
  
  system("pause");
  return 0;
}
