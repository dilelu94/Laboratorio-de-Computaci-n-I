/// Ejercicio: Ej15IngresarUnaListaDeSieteNumerosInformarCualEsElPrimerYSegundoNumeroImpar
/// Autor: Diego Leonel Luque
/// Fecha: 10/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

  int lista[7];
  int primerImpar = 0;
  int segundoImpar = 0;
  cout << "Ingrese 7 numeros: " << endl;
  for (int i = 0; i < 7; i++)
  {
    cin >> lista[i];
    if (lista[i] % 2 != 0)
    {
      if (primerImpar == 0)
      {
        primerImpar = lista[i];
      }
      else if (segundoImpar == 0)
      {
        segundoImpar = lista[i];
      }
    }
  }

  if (primerImpar == 0 && segundoImpar == 0)
  {
    cout << "No se ingresaron numeros impares" << endl;
  }
  else if (segundoImpar == 0)
  {
    cout << "Solo se ingreso un numero impar: " << primerImpar << endl;
  }
  else
  {
    cout << "El primer numero impar es: " << primerImpar << endl;
    cout << "El segundo numero impar es: " << segundoImpar << endl;
  }

  cout << endl;
  system("pause");
  return 0;
}
