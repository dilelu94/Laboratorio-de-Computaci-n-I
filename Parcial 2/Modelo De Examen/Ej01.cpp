/// Ejercicio: Ej01ModeloParcial2
/// Autor: Diego Leonel Luque
/// Fecha: 21/06/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

void cargarInformacion(int vP[], int vE[]);
void puntoA(int vE[], int tamE);
void puntoB(int vP[], int tamP);

int main()
{
  /*
  Registro:
    Número de empresa (1 a 80)(finaliza con 0)
    Mes (1 a 12)
    Código de obra
    Cantidad de kw de potencia de la obra
    Provincia (1 a 24)
    Tipo de obra (1:estación generadora; 2:estación transformadora)


  */

  int opcion;
  int vEmpresas[80] = {0};
  int vProvincias[24] = {0};

  while (true)
  {
    system("cls");
    cout << "Menu Principal" << endl;
    cout << "--------------" << endl;
    cout << "1) CARGAR INFORMACIÓN" << endl;
    cout << "2) PUNTO A" << endl;
    cout << "3) PUNTO B" << endl;
    cout << "--------------" << endl;
    cout << "0) SALIR" << endl;
    cin >> opcion;
    system("cls");

    switch (opcion)
    {
    case 0:
      return 0;
      break;

    case 1:
      cargarInformacion(vProvincias, vEmpresas);
      system("pause");
      break;

    case 2:
      puntoA(vEmpresas, 80);
      system("pause");
      break;

    case 3:
      puntoB(vProvincias, 24);
      system("pause");
      break;
    }
  }
  system("pause");
  return 0;
}

void cargarInformacion(int vP[], int vE[])
{
  int numeroDeEmpresa, mes, codigoDeObra, cantidadDeKw, provincia, tipoDeObra;

  cout << "Cargar Informacion" << endl; // para testear

  cout << "Ingrese el numero de empresa: ";
  cin >> numeroDeEmpresa;
  while (numeroDeEmpresa != 0)
  {
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el codigo de obra: ";
    cin >> codigoDeObra;
    cout << "Ingrese la cantidad de kw: ";
    cin >> cantidadDeKw;
    cout << "Ingrese la provincia: ";
    cin >> provincia;
    cout << "Ingrese el tipo de obra: ";
    cin >> tipoDeObra;
    //
    vE[numeroDeEmpresa - 1] += cantidadDeKw;
    vP[provincia - 1] = 1;

    //
    cout << "Ingrese el numero de empresa: (0 para terminar)" << endl;
    cin >> numeroDeEmpresa;
  }
}

void puntoA(int vE[], int tamE)
{
  int empresaConMayorCantidadDeKW = 0, numeroDeEmpresaConMayorCantidadDeKW = 0;
  cout << "Punto A" << endl;

  cout << "La empresa con mayor cantidad de KW es: " << endl;
  for (int i = 0; i < tamE; i++)
  {
    if (vE[i] > empresaConMayorCantidadDeKW)
    {
      empresaConMayorCantidadDeKW = vE[i];
      numeroDeEmpresaConMayorCantidadDeKW = i;
    }
  }
  cout << "La empresa " << numeroDeEmpresaConMayorCantidadDeKW + 1 << " con " << empresaConMayorCantidadDeKW << " KW" << endl;
}

void puntoB(int vP[], int tamP)
{
  cout << "Las provincias sin obras finalizadas el año pasado fueron: " << endl;
  for (int i = 0; i < tamP; i++)
  {
    if (vP[i] == 0)
    {
      cout << i + 1 << endl;
    }
  } 
}

