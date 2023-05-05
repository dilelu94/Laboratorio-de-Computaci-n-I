/// Ejercicio: Ej24IngresarConsumoElectricoYLocalidadDelClienteUnoDosOTresHastaIngresarCero
/// Autor: Diego Leonel Luque
/// Fecha: 22/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  $10 x kilovatio x <= 100 kilovatios de consumo.
  $12 x kilovatio x de 101 a 200 kilovatios.
  $15 x kilovatio x de 201 kilovatios en adelante.
  + costo fijo = $100
  //
  -N°Cliente x c/u Localidades con mayor kilovatios consumidos
  -Total recaudado x c/u de las localidades
  -N°Cliente con menor consumo exclullendo 0
  */

  int numeroDeCliente, localidadDelCliente, kilovatiosConsumidos, recaudacionLocalidadUno, recaudacionLocalidadDos, recaudacionLocalidadTres, clienteMenorConsumo, totalRecaudado;
  float costoPorKilovatio, costoFijo, costoTotal;

  system("pause");
  return 0;
}
