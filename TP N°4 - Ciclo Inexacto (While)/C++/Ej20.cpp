/// Ejercicio: Ej20IngresarUnNumeroEInformarSiEsPerfectoONoPerfecto
/// Autor: Diego Leonel Luque
/// Fecha: 22/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
    Perfecto = Suma de sus divisores = Numero
  */
  int numero, sumaDivisores, divisor=1;
  cout << "Ingrese un numero: ";
  cin >> numero;

  while (divisor < numero)
  {
    if (numero % divisor == 0)
    {
      sumaDivisores += divisor;
    }
    divisor++;
  }
  
  if (sumaDivisores == numero)
  {
    cout << "El numero es perfecto" << endl;
  }
  else
  {
    cout << "El numero no es perfecto" << endl;
  }
  
  system("pause");
  return 0;
}
