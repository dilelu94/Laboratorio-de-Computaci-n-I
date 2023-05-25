/// Ejercicio: Ej3 del parcial 1
/// Autor: Diego Leonel Luque
/// Fecha: 11/05/2023
/// Comentario: use adjetivos para no usar la Ñ.

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  Datos:
  N° de empleado
  Edad
  Cantidad de minutos de descanso
  Turno (N: noche, M: mañana, T: tarde)
  
  Informar:
  1.- Total minutos de descanso en cada turno.*
  2.- Cantidad de empleados con mas de 30 años.
  3.- El numero de empleado con mas minutos de descanso.
  */

  int numeroDeEmpleado, edad, minutosDeDescanso, cantidadDeEmpleadosConMasDe30 = 0, numeroDeEmpleadoConMasMinutosDeDescanso = 0;
  int descansoTurnoNoche = 0, descansoTurnoManana = 0, descansoTurnoTarde = 0;
  char turno;
  for (int empleado = 1; empleado <= 6; empleado++)
  {
    cout << "Ingrese el numero de empleado: ";
    cin >> numeroDeEmpleado;
    cout << "Ingrese la edad del empleado: ";
    cin >> edad;
    cout << "Ingrese la cantidad de minutos de descanso: ";
    cin >> minutosDeDescanso;
    cout << "Ingrese el turno (N: noche, M: matutino, T: tarde): ";
    cin >> turno;
    //
    if (turno == 'N')
    {
      descansoTurnoNoche += minutosDeDescanso;
    }
    else if (turno == 'M')
    {
      descansoTurnoManana += minutosDeDescanso;
    }
    else if (turno == 'T')
    {
      descansoTurnoTarde += minutosDeDescanso;
    }
    else
    {
      cout << "El turno ingresado no es valido" << endl;
    }
    //

    if (edad > 30)
    {
      cantidadDeEmpleadosConMasDe30++;
    }

    if (empleado == 1)
    {
      numeroDeEmpleadoConMasMinutosDeDescanso = numeroDeEmpleado;
    }
    else
    {
      if (minutosDeDescanso > numeroDeEmpleadoConMasMinutosDeDescanso)
      {
        numeroDeEmpleadoConMasMinutosDeDescanso = numeroDeEmpleado;
      }
    }
    
  }
  cout << "El total de minutos de descanso en el turno noche es: " << descansoTurnoNoche << endl;
  cout << "El total de minutos de descanso en el turno matutino es: " << descansoTurnoManana << endl;
  cout << "El total de minutos de descanso en el turno tarde es: " << descansoTurnoTarde << endl;
  
  cout << "La cantidad de empleados con edad mayor a 30 son: " << cantidadDeEmpleadosConMasDe30 << endl;
  
  cout << "El numero de empleado con mas minutos de descanso es: " << numeroDeEmpleadoConMasMinutosDeDescanso << endl;

  system("pause");
  return 0;
}
