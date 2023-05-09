/// Ejercicio: Ej01RegitrarLotesDeVentaDeTresDatos
/// Autor: Diego Leonel Luque
/// Fecha: 09/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  N° de Articulo (1 al 3) - 0 para terminar.
  Cantidad Unidades Vendidas.
  Importe de Venta.

  Informar: 
  recaudacion total por articulo. (3 al final)
  N° de articulo con mayor cantidad total de unidades vendidas. (1 al final)
  */

  int numeroArticulo = 1, recaudacionTotalArticulo1 = 0, recaudacionTotalArticulo2 = 0, recaudacionTotalArticulo3 = 0, numeroArticuloMayorCantidad = 0;
  int cantidadUnidadesVendidasArticulo1 = 0, cantidadUnidadesVendidasArticulo2 = 0, cantidadUnidadesVendidasArticulo3 = 0;
  float importeVenta, recaudacionTotal = 0;
  while (numeroArticulo != 0)
  {
    int cantidadUnidadesVendidas = 0;
    cout << "Ingrese el numero de articulo (1 al 3) o 0 para terminar: ";
    cin >> numeroArticulo;
    if (numeroArticulo != 0)
    {
      cout << "Ingrese la cantidad de unidades vendidas: ";
      cin >> cantidadUnidadesVendidas;
      cout << "Ingrese el importe de venta: ";
      cin >> importeVenta;
      switch (numeroArticulo)
      {
      case 1:
        recaudacionTotalArticulo1 += importeVenta * cantidadUnidadesVendidas;
        cantidadUnidadesVendidasArticulo1 += cantidadUnidadesVendidas;
        break;
      case 2:
        recaudacionTotalArticulo2 += importeVenta * cantidadUnidadesVendidas;
        cantidadUnidadesVendidasArticulo2 += cantidadUnidadesVendidas;
        break;
      case 3:
        recaudacionTotalArticulo3 += importeVenta * cantidadUnidadesVendidas;
        cantidadUnidadesVendidasArticulo3 += cantidadUnidadesVendidas;
        break;
      default:
        cout << "El numero de articulo ingresado no es valido." << endl;
        break;
      }
      
      if (cantidadUnidadesVendidasArticulo1 > cantidadUnidadesVendidasArticulo2 && cantidadUnidadesVendidasArticulo1 > cantidadUnidadesVendidasArticulo3)
      {
        numeroArticuloMayorCantidad = 1;
      }
      else if (cantidadUnidadesVendidasArticulo2 > cantidadUnidadesVendidasArticulo1 && cantidadUnidadesVendidasArticulo2 > cantidadUnidadesVendidasArticulo3)
      {
        numeroArticuloMayorCantidad = 2;
      }
      else if (cantidadUnidadesVendidasArticulo3 > cantidadUnidadesVendidasArticulo1 && cantidadUnidadesVendidasArticulo3 > cantidadUnidadesVendidasArticulo2)
      {
        numeroArticuloMayorCantidad = 3;
      }
    }
  }

  cout << "La recaudacion total del articulo 1 es: " << recaudacionTotalArticulo1 << endl;
  cout << "La recaudacion total del articulo 2 es: " << recaudacionTotalArticulo2 << endl;
  cout << "La recaudacion total del articulo 3 es: " << recaudacionTotalArticulo3 << endl;
  cout << "El numero de articulo con mayor cantidad total de unidades vendidas es: " << numeroArticuloMayorCantidad << endl;

  system("pause");
  return 0;
}
