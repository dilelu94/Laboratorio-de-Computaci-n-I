/// Ejercicio: Ej18IngresarNumerosHastaQueSeIngreseDosNumerosPositivosConsecutivosEInformarElMaximo
/// Autor: Diego Leonel Luque
/// Fecha: 21/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int numero, numeroAnterior = 0, maximo = 0;
  bool dosNumerosConsecutivosPositivosEncontrados = false;

  while (!dosNumerosConsecutivosPositivosEncontrados)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0 && numeroAnterior > 0)
    {
      dosNumerosConsecutivosPositivosEncontrados = true;
    }

    if (numeroAnterior == 0)
    {
      numeroAnterior = numero;
    }

    if (numero > maximo)
    {
      maximo = numero;
    }
    else if (numeroAnterior > maximo)
    {
      maximo = numeroAnterior;
    }

    numeroAnterior = numero;
  }

  cout << "El maximo es: " << maximo << endl;

  system("pause");
  return 0;
}
