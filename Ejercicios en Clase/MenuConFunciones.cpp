/// Ejercicio: EjNumero ejercicio
/// Autor: Diego Leonel Luque
/// Fecha: 03/06/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

#include "../funciones.h"

int main()
{
  int opcion, vector[5], posicionMax;
  while (true)
  {
    system("cls"); // limpia la pantalla
    cout << "Menu Principal" << endl;
    cout << "1. Cargar Vector" << endl;
    cout << "2. Mostrar Vector" << endl;
    cout << "3. Mostrar Posicion del Maximo" << endl;
    cout << "4. Mostrar Valor del Maximo" << endl;
    cout << "0. Fin del Programa" << endl;
    cout << "=====================" << endl;
    cout << "Ingrese una Opcion: ";
    cin >> opcion;
    system("cls");
    switch (opcion)
    {
    case 0:
      return 0;
      break;
    case 1:
      // cargarVector(vector, 5);
      cargarAleatorio(vector, 5, 100);
      break;
    case 2:
      mostrarVector(vector, 5);
      endl(cout);
      system("pause");
      break;
    case 3:
      posicionMax = maximoVector(vector, 5);
      cout << "El maximo se encuentra en la posicion: " << posicionMax << endl;
      system("pause");
      break;
    case 4:
      cout << "El maximo valor del vector es: " << maximoValorDelVector(vector, 5) << endl;
      system("pause");
      break;
    default:
      cout << "Opcion Incorrecta" << endl;
      cout << endl;
      system("pause");
      break;
    }
  }

  system("pause");
  return 0;
}
