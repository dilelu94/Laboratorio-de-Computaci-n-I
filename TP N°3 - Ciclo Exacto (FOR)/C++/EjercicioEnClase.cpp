/// Ejercicio: EjCalcularPromedioDeEdadDeCincoPersonas
/// Autor: Diego Leonel Luque
/// Fecha: 14/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int edad, promedio;
  for (int i = 0; i < 5; i++)
  {
    cout << "Ingrese la edad de la persona " << i + 1 << ": ";
    cin >> edad;
    promedio += edad;
  }
  promedio /= 5;
  cout << "El promedio de edad es: " << promedio << endl;
  
  system("pause");
  return 0;
}
