/// Ejercicio: Ej15IngresarDosListasDeCincoNumerosCadaUnaSinNumerosRepetidosGuardarlasEnUnaListaConLosElementosIntercalados
/// Autor: Diego Leonel Luque
/// Fecha: 26/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float numeros1[5];
  float numeros2[5];
  float numerosIntercalados[10];

  for (int i = 0; i < 5; i++)
  {
    cout << "Ingrese un numero para la lista 1: ";
    cin >> numeros1[i];
  }

  for (int i = 0; i < 5; i++)
  {
    cout << "Ingrese un numero para la lista 2: ";
    cin >> numeros2[i];
  }

  for (int i = 0; i < 10; i++)
  {
    if (i % 2 == 0)
    {
      numerosIntercalados[i] = numeros1[i / 2];
    }
    else
    {
      numerosIntercalados[i] = numeros2[i / 2];
    }
  }

  cout << "Los Numeros Intercalados Son: " << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << numerosIntercalados[i] << ", ";
  }
  endl(cout);
  
  system("pause");
  return 0;
}
