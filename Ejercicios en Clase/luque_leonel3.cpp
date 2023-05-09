/// Ejercicio: Ej03PorDiaDeAyerIngresarCuatroDatosDeCincoPersonas
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
  N° afiliado entero
  edad entero
  genero "F" o "M" u "O"
  Temperatura float

  Total de 5 pacientes

  Informar:
  1.- N° De afiliado y Temperatura del Masculino con mayor temperatura.
  2.- Promedio edad Mujeres.
  3.- Porcentaje de pacientes con:
    hipotermia (menor a 35)
    normal (entre 35 y 37.5)
    febril (mayor a 37.5)
  */
  int temperaturaMasculinoMayor = 0, numeroAfiliadoMasculinoMayor = 0;
  int contadorMujeres = 0;
  float sumaEdadMujeres = 0;
  int hipotermia = 0, normal = 0, fiebre = 0;

  for (int pacientes = 1; pacientes <= 5; pacientes++)
  {
    int numeroAfiliado;
    int edad;
    char genero;
    float temperatura;
    cout << "Ingrese el numero de afiliado: ";
    cin >> numeroAfiliado;
    cout << "Ingrese la edad: ";
    cin >> edad;
    cout << "Ingrese el genero (F/M/O): ";
    cin >> genero;
    cout << "Ingrese la temperatura: ";
    cin >> temperatura;
    cout << endl;
    if (genero == 'M' && temperatura > temperaturaMasculinoMayor)
    {
      temperaturaMasculinoMayor = temperatura;
      numeroAfiliadoMasculinoMayor = numeroAfiliado;
    }
    if (genero == 'F')
    {
      sumaEdadMujeres += temperatura;
      contadorMujeres++;
    }
    if (temperatura < 35)
    {
      hipotermia++;
    }
    else if (temperatura >= 35 && temperatura <= 37.5)
    {
      normal++;
    }
    else
    {
      fiebre++;
    }
  }
  cout << "El numero de afiliado del masculino con mayor temperatura es: " << numeroAfiliadoMasculinoMayor << endl;
  cout << "El promedio de edad de las mujeres es: " << sumaEdadMujeres / contadorMujeres << endl;
  cout << "El porcentaje de pacientes con hipotermia es: " << ((float) hipotermia * 100) / 5 << "%" << endl;
  cout << "El porcentaje de pacientes con temperatura normal es: " << ((float) normal * 100) / 5 << "%" << endl;
  cout << "El porcentaje de pacientes con fiebre es: " << ((float) fiebre * 100) / 5 << "%" << endl;


  system("pause");
  return 0;
}
