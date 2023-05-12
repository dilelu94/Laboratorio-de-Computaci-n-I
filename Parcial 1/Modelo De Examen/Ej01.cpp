/// Ejercicio: Ej01DeCincoProvinciasIngresarRegistroConCodigoDeProductoHastaIngresarNegativo
/// Autor: Diego Leonel Luque
/// Fecha: 11/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  Datos:
  1.- Provincia 1 al 5
  2.- Codigo de producto (codigo != 0):
    a) Tipo de producto ("F" - fruta; "V" - verdura)
    b) Toneladas Exportadas
    c) Importe

  Informar:
  1.- Por cada provincia total toneladas e importe recaudado.
  2.- Codigo de provincia con mayor cantidad de toneladas del producto 5.
  3.- Porcentaje de frutas y verduras.
  */
  int codigoDeProducto = 1, provinciaConMayorCantidadDeToneladas = 0, frutas = 0, verduras = 0, registros = 0, sumaToneladasDelProductoCincoAnterior = 0;
  for (int provincia = 1; provincia <= 5; provincia++)
  {
      codigoDeProducto = 1;
      int toneladasExportadas = 0, importe = 0;
      int sumaToneladasDelProductoCinco = 0;
      char tipoDeProducto;
      int sumaToneladasDelGrupo = 0, sumaImporteDelGrupo = 0;
      while (codigoDeProducto != 0)
      {
        cout << "Ingrese el codigo de producto: ";
        cin >> codigoDeProducto;
        if (codigoDeProducto != 0)
        {
          registros++;
          cout << "Ingrese el tipo de producto (F - fruta; V - verdura): ";
          cin >> tipoDeProducto;
          cout << "Ingrese la cantidad de toneladas exportadas: ";
          cin >> toneladasExportadas;
          cout << "Ingrese el importe: ";
          cin >> importe;
          cout << endl;

          sumaToneladasDelGrupo += toneladasExportadas;
          sumaImporteDelGrupo += importe;

          if (codigoDeProducto == 5)
          {
            sumaToneladasDelProductoCinco += toneladasExportadas;
            if (sumaToneladasDelProductoCinco > sumaToneladasDelProductoCincoAnterior)
            {
              provinciaConMayorCantidadDeToneladas = provincia;
            }
          }

          if (tipoDeProducto == 'F')
          {
            frutas++;
          }
          else if (tipoDeProducto == 'V')
          {
            verduras++;
          }
        }
      }
        cout << "Total de toneladas exportadas: " << sumaToneladasDelGrupo << endl;
        cout << "Total de importe recaudado: " << sumaImporteDelGrupo << endl;
    
  }
  cout << "Provincia con mayor cantidad de toneladas del producto 5: " << provinciaConMayorCantidadDeToneladas << endl;
  cout << "Porcentaje de frutas: %" << (frutas * 100) / (float)registros << endl;
  cout << "Porcentaje de verduras: %" << (verduras * 100) / (float)registros << endl;

  system("pause");
  return 0;
}
