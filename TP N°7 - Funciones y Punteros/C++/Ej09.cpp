/// Ejercicio: Ej09FuncionQueRecibaValorDeUnAñoYDevuelva1SiEsBisiestoY0SiNoLoEs
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int esBisiesto(int anio);

int main()
{
  int anios[10];
  int cantidadAniosBisiestos = 0;

  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese un anio: ";
    cin >> anios[i];
    if (esBisiesto(anios[i]) == 1)
    {
      cantidadAniosBisiestos++;
    }
  }

  cout << "La cantidad de anios bisiestos es: " << cantidadAniosBisiestos << endl;
  
  system("pause");
  return 0;
}

int esBisiesto(int anio)
{
  int bisiesto = 0;
  if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0)
  {
    bisiesto = 1;
  }
  else
  {
    bisiesto = 0;
  }
  return bisiesto;
}