/// Ejercicio: Ej07FuncionQueRecibaUnNumeroYMuestreSusDivisores
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

void mostrarDivisores(float num);

int main()
{
  int numero;
  cout << "Ingrese un numero: ";
  cin >> numero;

  mostrarDivisores(numero);
  
  system("pause");
  return 0;
}

void mostrarDivisores(int num)
{
  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      cout << i << endl;
    }
  }
  return;
}