///Ejercicio: EJ07IngresarImporteDeUnaVentaYPorcentajeDeDescuentoEInformarElImporteAPagar
///Autor: Diego Leonel Luque
///Fecha: 30
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
/*


*/
  int importe, porcentaje, importeAPagar;
  cout << "Ingrese el importe de la venta: " << endl;
  cin >> importe;
  cout << "Ingrese el porcentaje de descuento: " << endl;
  cin >> porcentaje;
  importeAPagar = importe - (importe * porcentaje / 100);
  cout << "El importe a pagar es: $" << importeAPagar << endl;
  system("pause");
  return 0;
}