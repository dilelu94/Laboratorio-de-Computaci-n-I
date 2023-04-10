/// Ejercicio: Ej18IngresarUnaListaDeOchoNumerosEInformarSiTodosEstanOrdenadosEnFormaCreciente
/// Autor: Diego Leonel Luque
/// Fecha: 10/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
    numeros iguales son crecientes
  */
  cout << "Ingrese ocho numeros: " << endl;
  float numero[8];
  for (int i = 0; i < 8; i++) {
    cin >> numero[i];
  }
  for (int i = 0; i < 7; i++) {
    if (numero[i] > numero[i + 1]) {
      cout << "Conjunto No Ordenado" << endl;
      break;
    }else if (i == 6) {
      cout << "Conjunto Ordenado" << endl;
    }
  }

  system("pause");
  return 0;
}
