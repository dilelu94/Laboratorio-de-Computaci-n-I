/// Ejercicio: Ej04IngresarRegistrosClimaticosDeCuatroDatosCadaUno
/// Autor: Diego Leonel Luque
/// Fecha: 09/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  Datos:
  N° de estacion meteoroogica (entero)
  Hora (0 a 23) (entero)
  Temperatura float
  Milimetros de lluvia (float)

  Datos de estaciones meteoroligicas distintas hasta ingresar 0

  Informar:
  1.- Promedio de temperatura entre todas las mediciones.
  2.- Cantidad de registros donde no hubo lluvia entre las 6 y 12 inclusive.
  3.- Por cada estacion informar temperatura minima y horario de la misma.
  */

  int numeroEstacion = 1, hora, contadorDeEstaciones = 0, registrosSinLluvia = 0;
  float temperatura, milimetrosLluvia;
  float sumaTemperatura = 0;
  float temperaturaMinima = 0;
  bool primerIngreso = false;
  int horaTemperaturaMinima = 0;
  while (numeroEstacion != 0)
  {
    cout << "Ingrese el numero de estacion: ";
    cin >> numeroEstacion;
    if (numeroEstacion != 0)
    {
      for (int registros = 1; registros <= 3; registros++)
      {
        cout << "Ingrese la hora: ";
        cin >> hora;
        cout << "Ingrese la temperatura: ";
        cin >> temperatura;
        cout << "Ingrese los milimetros de lluvia: ";
        cin >> milimetrosLluvia;
        cout << endl;
        sumaTemperatura += temperatura;
        contadorDeEstaciones++;
        if (hora >= 6 && hora <= 12 && milimetrosLluvia == 0)
        {
          registrosSinLluvia++;
        }
        if (primerIngreso == false)
        {
          temperaturaMinima = temperatura;
          horaTemperaturaMinima = hora;
          primerIngreso = true;
        }
        else if (temperatura < temperaturaMinima)
        {
          temperaturaMinima = temperatura;
          horaTemperaturaMinima = hora;
        }
      }
      cout << "La temperatura minima fue: " << temperaturaMinima << " a las " << horaTemperaturaMinima << endl;
    }
  }
  cout << "El promedio de temperatura es: " << sumaTemperatura / contadorDeEstaciones << endl;
  cout << "La cantidad de registros sin lluvia entre las 6 y las 12 es: " << registrosSinLluvia << endl;
  
  system("pause");
  return 0;
}
