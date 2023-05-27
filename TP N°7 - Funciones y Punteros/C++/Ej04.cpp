/// Ejercicio: Ej04FuncionQueRecibaDosNumerosYRetorneElMayor
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int mayorDeDosNumeros(int numero1, int numero2)
{
  if (numero1 > numero2)
  {
    return numero1;
  }
  else
  {
    return numero2;
  }
}

int main()
{
  int numero1, numero2;
  cout << "Ingrese un numero: ";
  cin >> numero1;
  cout << "Ingrese otro numero: ";
  cin >> numero2;

  cout << "El mayor de ambos numeros es: " << mayorDeDosNumeros(numero1, numero2) << endl;
  
  system("pause");
  return 0;
}
