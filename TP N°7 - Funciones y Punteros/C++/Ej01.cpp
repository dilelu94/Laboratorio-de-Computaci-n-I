/// Ejercicio: Ej01FuncionQueIngresarUnNumeroYMostrarlo
/// Autor: Diego Leonel Luque
/// Fecha: 26/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

void mostrarTresVeces(int numero)
{
  cout << numero << endl;
  cout << numero << endl;
  cout << numero << endl;
  return;
}

int main()
{
  int numero;
  cout << "Ingrese un numero: ";
  cin >> numero;

  mostrarTresVeces(numero);

  system("pause");
  return 0;
}
