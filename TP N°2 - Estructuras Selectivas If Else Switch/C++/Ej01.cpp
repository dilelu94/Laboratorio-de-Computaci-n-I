/// Ejercicio: IngresarUnNumeroEmitirCartelIndicandoSiEsPositivoNegativoOcero
/// Autor: Diego Leonel Luque
/// Fecha: 30/03/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numero;
  cout << "Ingrese un numero: ";
  cin >> numero;
  if (numero > 0)
  {
    cout << "El numero es positivo" << endl;
  }
  else
  {
    if (numero < 0)
    {
      cout << "El numero es negativo" << endl;
    }
    else
    {
      cout << "El numero es cero" << endl;
    }
  }

  system("pause");
  return 0;
}