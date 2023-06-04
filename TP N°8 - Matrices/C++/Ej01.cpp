/// Ejercicio: Ej01FabricaConUn2Registros
/// Autor: Diego Leonel Luque
/// Fecha: 02/06/2023
/// Comentario: Estaria bueno que lo expliquen en alguna clase a esto. esta hecho, pero para el culo. ni siquiera use matrices???

#include <iostream>
#include <cstdlib>

using namespace std;

#include "../../funciones.h"

int main()
{
  /*
  Datos:
    -Dia (1 a 31)
      -Numero de empleado (1 a 200).
        -Categoria (1 a 20).
        -Antiguedad.
      -Horas trabajadas ese dia.
      -Jornal cobrado ese dia.

  Informar:
    a) Para cada numero de empleado, Informar el dia del mes que mas horas trabajo.
    b) Para cada numero de empleado informar el total a cobrar,
      (dias trabajados > 20 dias total a cobrar + $2000).
    c) Informar cual es el numero de categoria por la cual se haya pagado mayor cantidad de pesos en sueldos
  */

  // el lote de mierda 1 y despues lo comparo con el otro

  int numeroDeEmpleado[199];
  int categoria[199];
  int antiguedad[199];

  int empleado;
  int indiceEmpleado, categoriasPagadas[20], categoriaMasPagada;

  ponerCero(categoriasPagadas, 20);

  cargarAleatorio(numeroDeEmpleado, 199, 200);
  cargarAleatorio(categoria, 199, 20);
  cargarAleatorio(antiguedad, 199, 20);

  /* cout << "numero de empleado:\t\tcategoria:\t\tantiguead:" << endl;
  for (int i = 0; i < 199; i++)
  {
    cout << numeroDeEmpleado[i] << "\t\t\t\t" << categoria[i] << "\t\t\t" << antiguedad[i] << endl;
  }

  cout << "----------------------------------------------------------" << endl; */

  cout << "Ingrese el numero de empleado (1 a 200): ";
  cin >> empleado;
  while (empleado != 0)
  {
    int dia, horasTrabajadas, jornal, jornalCobrado[30];
    ponerCero(jornalCobrado, 30);
    int diasTrabajados = 0, diaMasHoras = 0;
    cout << "Ingrese dia del mes (1 a 31): ";
    cin >> dia;
    while (dia != 0)
    {
      cout << "Ingrese horas trabajadas: ";
      cin >> horasTrabajadas;
      cout << "Ingrese jornal cobrado: ";
      cin >> jornal;
      jornalCobrado[dia - 1] += jornal;

      // contar jornal cobrado != 0
      for (int i = 0; i < 30; i++)
      {
        if (jornalCobrado[i] != 0)
        {
          diasTrabajados++;
        }
      }
      if (diaMasHoras == 0)
      {
        diaMasHoras = dia;
      }
      else
      {
        if (horasTrabajadas > diaMasHoras)
        {
          diaMasHoras = dia;
        }
      }

      cout << "Ingrese dia del mes (1 a 31): ";
      cin >> dia;
    }
    int totalACobrar = 0;
    if (diasTrabajados > 20)
    {
      totalACobrar = sumarVector(jornalCobrado, 30) + 2000;
      cout << "El total a cobrar es: " << totalACobrar << endl;
    }
    else
    {
      totalACobrar = sumarVector(jornalCobrado, 30);
      cout << "El total a cobrar es: " << totalACobrar << endl;
    }

    cout << "El dia que mas horas trabajo es: " << diaMasHoras << endl;

    // numero de categoria por la cual se halla pagado mas sueldos
    indiceEmpleado = buscarNumeroEnVector(numeroDeEmpleado, 199, empleado);
    int nuevoIndice = categoria[indiceEmpleado] - 1;
    categoriasPagadas[nuevoIndice] += totalACobrar;
    categoriaMasPagada = maximoVector(categoriasPagadas, 20);

    /*     cout << indiceEmpleado << endl;
        cout << nuevoIndice << endl;
        mostrarVector(categoriasPagadas, 20); */

    cout << "Ingrese numero de empleado (1 a 200): ";
    cin >> empleado;
  }

  cout << "La categoria mas pagada es: " << categoriaMasPagada + 1 << endl;

  system("pause");
  return 0;
}
