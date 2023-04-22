/// Ejercicio: Ej17IngresarNumerosHastaQueSeIngresanDosNumerosConsecutivosIgualesEInformarElMaximo
/// Autor: Diego Leonel Luque
/// Fecha: 21/04/2023
/// Comentario: no descarto el ultimo numero pero tampoco influye(?)

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float numero, numeroAnterior, maximo=0;
  bool dosNumerosConsecutivosIgualesEncontrados = false;

  while (!dosNumerosConsecutivosIgualesEncontrados)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero == numeroAnterior)
    {
      dosNumerosConsecutivosIgualesEncontrados = true;
    }

    else if (numeroAnterior == 0)
    {
      maximo = numero;
      numeroAnterior = numero;
    }
    else
    {
      if (numero > maximo)
      {
        maximo = numero;
      }
    }

    numeroAnterior = numero;
  }

  cout << "El maximo es: " << maximo << endl;  
  
  system("pause");
  return 0;
}
