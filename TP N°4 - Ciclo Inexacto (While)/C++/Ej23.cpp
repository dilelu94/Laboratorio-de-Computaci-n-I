/// Ejercicio: Ej23IngresarUnNumeroEInformarSiEsPrimoONo
/// Autor: Diego Leonel Luque
/// Fecha: 10/04/2023
/// Comentario:

#include <iostream> 
#include <cstdlib>

using namespace std;

int main()
{
  int numero;
  int CantidadDeDivisores = 0;
  cout << "Ingrese un numero: ";
  cin >> numero;
  for (int i = 1; i <= numero; i++)
  {
    if (numero % i == 0)
    {
      CantidadDeDivisores++;
    }
  }
  if (CantidadDeDivisores == 2)
  {
    cout << "El numero es primo" << endl;
  }
  else
  {
    cout << "El numero no es primo" << endl;
  }  
  
  system("pause");
  return 0;
}
