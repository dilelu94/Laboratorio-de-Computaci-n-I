/// Ejercicio: Ej09IngresarNumerosHastaIngresarUnCeroEInformarElMaximoYLaPosicionDelMaximo
/// Autor: Diego Leonel Luque
/// Fecha: 21/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  
  */
  int numero, maximo = 0, posicion = 0, contador = 0;
  while (numero != 0)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;
    contador++;
    if (maximo == 0 & numero != 0)
    {
      maximo = numero;
      posicion = contador;
    }
    else if (numero > maximo & numero != 0)
    {
      maximo = numero;
      posicion = contador;
    }
  }
  cout << "El maximo es: " << maximo << endl;
  cout << "La posicion del maximo es: " << posicion << endl;

  system("pause");
  return 0;
}
