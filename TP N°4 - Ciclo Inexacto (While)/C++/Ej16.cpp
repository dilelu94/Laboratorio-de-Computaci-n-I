/// Ejercicio: Ej16IngresarNumerosHastaIngresarUnCeroEInformarElMayorYSegundoMayor
/// Autor: Diego Leonel Luque
/// Fecha: 21/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float numero, mayor = 0, segundoMayor = 0;

  do
  {
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (mayor == 0)
    {
      mayor = numero;
    }
    else if (numero > mayor)
    {
      segundoMayor = mayor;
      mayor = numero;
    }
    else if (numero > segundoMayor && numero != mayor)
    {
      segundoMayor = numero;
    }
  } while (numero != 0);

  if (mayor == 0)
  {
    cout << "No se ingresaron numeros." << endl;
  }
  else if (segundoMayor == 0)
  {
    cout << "El unico numero ingresado es: " << mayor << endl;
  }
  else
  {
    cout << "El mayor es: " << mayor << endl;
    cout << "El segundo mayor es: " << segundoMayor << endl;
  }

  system("pause");
  return 0;
}
