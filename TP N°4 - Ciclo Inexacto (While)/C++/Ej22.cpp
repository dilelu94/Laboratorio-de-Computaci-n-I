/// Ejercicio: Ej22IngresarUnNumeroYMostrarloSeparadoPorComas
/// Autor: Diego Leonel Luque
/// Fecha: 22/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  
  */
  int resto, cosiente, base = 10;
  cout << "Ingrese un numero: ";
  cin >> cosiente;
  
  while (cosiente != 0)
  {
    resto = cosiente % base;
    cosiente = cosiente / base;
    cout << resto << ",";
  }
  
  system("pause");
  return 0;
}
