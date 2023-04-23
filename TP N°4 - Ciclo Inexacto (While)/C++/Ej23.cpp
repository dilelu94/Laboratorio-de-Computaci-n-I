/// Ejercicio: Ej23IngresarContraseñaSiEsCorrectaMostrarMensajeDeBienvenidaSiEsIncorrectaMostrarMensajeContraseñaInvalidaTresVecesInvalidaMostrarMensajeDeIntentosAgotados
/// Autor: Diego Leonel Luque
/// Fecha: 22/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  Contraseña Correcta: "Bienvenido"
  Contraseña Incorrecta: "Contraseña Invalida"
  3 Contraseñas Incorrectas: "Intentos Agotados" y finalizar programa
  contraseña: 1234
  */

  int intentos = 0, contraseña = 1234, contraseñaIngresada;

  while (intentos < 3)
  {
    cout << "Ingrese la contraseña: ";
    cin >> contraseñaIngresada;
    if (contraseñaIngresada == contraseña)
    {
      cout << "Bienvenido" << endl;
      break;
    }
    else
    {
      cout << "Contraseña Invalida" << endl;
      intentos++;
    }
  }

  if (intentos == 3)
  {
    cout << "Intentos Agotados" << endl;
  }

  system("pause");
  return 0;
}
