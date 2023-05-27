/// Ejercicio: Ej16IngresarVeinteTiposDeArticulosConSusDatosCadaUno
/// Autor: Diego Leonel Luque
/// Fecha: 26/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  Datos:
  - Numero de articulo (1 al 4)
    - Multiples registros de "Cantidad Vendida" (finaliza con 0)

  Informar:
  a) El "número de artículo" que más se vendió en total.
  b) Los "números de artículos" que no registraron ventas.
  c) Cuantas unidades se vendieron del número de artículo 10.
  */

  int articulos[4];
  int cantidadVendida = 1;
  int cantidadVendidaTotal[4];
  int cantidadArticuloMasVendido = 0, articuloMasVendido = 0;

  for (int i = 0; i < 4; i++)
  {
    cout << "Ingrese el numero de articulo: ";
    cin >> articulos[i];

    cout << "Ingrese la cantidad vendida: ";
    cin >> cantidadVendida;

    while (cantidadVendida != 0)
    {
      cantidadVendidaTotal[i] += cantidadVendida;

      cout << "Ingrese la cantidad vendida: ";
      cin >> cantidadVendida;
    }
  }

  for (int i = 0; i < 4; i++)
  {
    if (articuloMasVendido == 0)
    {
      articuloMasVendido = articulos[i];
      cantidadArticuloMasVendido = cantidadVendidaTotal[i];
    }
    else if (cantidadVendidaTotal[i] > cantidadArticuloMasVendido)
    {
      articuloMasVendido = articulos[i];
    }

    if (cantidadVendidaTotal[i] == 0)
    {
      cout << "El articulo " << articulos[i] << " no registro ventas." << endl;
    }

    if (articulos[i] == 10)
    {
      cout << "Se vendieron " << cantidadVendidaTotal[i] << " unidades del articulo 10." << endl;
    }
  }

  cout << "El articulo mas vendido es el: " << articuloMasVendido << endl;

    system("pause");
    return 0;
  }
