/// Ejercicio: Ej08FuncionQueRecibaFechaDeNacimientoYLaActualYDevuelvaLaEdadEnAños
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <ctime>
#include <iostream>
#include <cstdlib>

using namespace std;

void calcularEdad(int diaNac, int mesNac, int anioNac, int diaAct, int mesAct, int anioAct)
{
  int edad = anioAct - anioNac;
  if (mesAct < mesNac)
  {
    edad--;
  }
  else if (mesAct == mesNac)
  {
    if (diaAct < diaNac)
    {
      edad--;
    }
  }
  cout << "La edad es: " << edad << endl;
  return;
}

int main()
{
  int diaNacimiento, mesNacimiento, anioNacimiento;

  // Get the current time
  std::time_t currentTime = std::time(nullptr);

  // Convert the current time to a local time struct
  std::tm *localTime = std::localtime(&currentTime);
  
  // Extract the year, month, and day from the local time struct
  int anioActual = localTime->tm_year + 1900; // Years since 1900
  int mesActual = localTime->tm_mon + 1;      // Months start from 0
  int diaActual = localTime->tm_mday;

  cout << "Ingrese su fecha de nacimiento: " << endl;
  cout << "Dia: ";
  cin >> diaNacimiento;
  cout << "Mes: ";
  cin >> mesNacimiento;
  cout << "Anio: ";
  cin >> anioNacimiento;

  calcularEdad(diaNacimiento, mesNacimiento, anioNacimiento, diaActual, mesActual, anioActual);

  system("pause");
  return 0;
}
