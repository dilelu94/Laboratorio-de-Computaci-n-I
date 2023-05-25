/// Ejercicio: Ej4 del parcial 1
/// Autor: Diego Leonel Luque
/// Fecha: 11/05/2023
/// Comentario: suponiendo que el usuario no ingresa horas negativas, y tambien va a tomar el primer medico con mas horas si son iguales.

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  Datos:
  N° de centro de salud.
  N° de medico.
  N° de universidad de egreso.
  Cantidad de horas de trabajo.(entero)

  -Registro por N° de centro de salud.(finaliza con 0)
    -5 medicos.
      -cuatro datos.

  Informar:
  1.- Por cada centro de salud, cantidad de horas de todos los medicos.
  2.- Cantidad de medicos(entre todos los centros) con n° universidad = 20
  3.- N° de medico con mas cantidad de horas trabajadas y n° de centro de salud.
  */

  int centroDeSalud = 1, cantidadDeMedicosConNumeroDeUniversidad20 = 0, horasDelMedicoConMasHorasTrabajadas = 0;
  int numeroDeMedicoConMasHorasTrabajadas = 0, numeroDeCentroDeSaludDelMedicoConMasHorasTrabajadas = 0;
  while (centroDeSalud != 0)
  {
    int numeroDeMedico, universidad, horas;
    int horasTrabajadasEnEsteCentro = 0;

    cout << "Ingrese el numero de centro de salud: ";
    cin >> centroDeSalud;

    if (centroDeSalud == 0)
    {
      break;
    }
    else
    {
      for (int medicos = 1; medicos <= 5; medicos++) 
      {
        //logica para cada centro de salud aca abajo
        cout << "Ingrese el numero de medico: ";
        cin >> numeroDeMedico;
        cout << "Ingrese el numero de universidad de egreso: ";
        cin >> universidad;
        cout << "Ingrese la cantidad de horas de trabajo: ";
        cin >> horas;
        cout << medicos << endl;

        horasTrabajadasEnEsteCentro += horas;

        if (universidad == 20)
        {
          cantidadDeMedicosConNumeroDeUniversidad20++;
        }

        if (horas > horasDelMedicoConMasHorasTrabajadas)
        {
          horasDelMedicoConMasHorasTrabajadas = horas;
          numeroDeMedicoConMasHorasTrabajadas = numeroDeMedico;
          numeroDeCentroDeSaludDelMedicoConMasHorasTrabajadas = centroDeSalud;
        }

      }
      cout << "La cantidad de horas de trabajo de todos los medicos es en este centro fue de: " << horasTrabajadasEnEsteCentro << endl;
    }
  }
  cout << "La cantidad de medicos con numero de universidad 20 es: " << cantidadDeMedicosConNumeroDeUniversidad20 << endl;

  cout << "El numero de medico con mas horas trabajadas es: " << numeroDeMedicoConMasHorasTrabajadas << endl;
  cout << "El numero de centro de salud del medico con mas horas trabajadas es: " << numeroDeCentroDeSaludDelMedicoConMasHorasTrabajadas << endl; 

  system("pause");
  return 0;
}
