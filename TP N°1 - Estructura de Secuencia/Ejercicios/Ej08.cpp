///Ejercicio: EJ08IngresarImporteDeVentaConYSinDescuentoEInformarElPorcentajeDelDescuento
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  int importeConDescuento, importeSinDescuento, porcentajeDescuento;
  cout << "Ingrese el importe de la venta con descuento: ";
  cin >> importeConDescuento;
  cout << "Ingrese el importe de la venta sin descuento: ";
  cin >> importeSinDescuento;
  porcentajeDescuento = (importeSinDescuento - importeConDescuento) * 100 / importeSinDescuento;
  cout << "El porcentaje de descuento es del: " << porcentajeDescuento << "%" << endl;

  system("pause");
  return 0;
}