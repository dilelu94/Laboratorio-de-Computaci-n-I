///Ejercicio: Ej05IngresarImporteDeVentaYCalcularElImporteFinalConDescuento
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  /*
  menor a 100 descuento del 5%
  entre 100 y hasta 500 descuento del 10%
  mayor a 500 descuento del 15%
  */
  float importe, importeFinal;
  cout << "Ingrese el importe de la venta: ";
  cin >> importe;
  if (importe < 100){
    importeFinal = importe - (importe * 0.05);
  } else if (importe >= 100 && importe <= 500){
    importeFinal = importe - (importe * 0.1);
  } else {
    importeFinal = importe - (importe * 0.15);
  }
  cout << "El importe final es: $" << importeFinal << endl;

  system("pause");
  return 0;
}