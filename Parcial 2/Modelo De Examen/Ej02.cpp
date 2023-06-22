/// Ejercicio: Ej02ModeloParcial2
/// Autor: Diego Leonel Luque
/// Fecha: 21/06/2023
/// Comentario:

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

void cargarInformacion(float vR[], int vP[], char maxEmpresa[]);
void puntoA(float v[], int tamR);
void puntoB(int v[], int tamP);
void puntoC(float v[], int tamR);
void puntoD(char v[]);

int main()
{
  /*
  Registros:
    numeroDeExportacion = (int) (finaliza con 0)
    region = (1 - Noroeste, 2 - Nordeste, 3 - Pampeana, 4 - Cuyo, 5 - Patagonia)
    producto = (1 - Limon, 2 - Yerba mate, 3 - Manzana, 4 - Durazno, 5 - Te)
    nombreExportadora = (char[30])
    cantidadDeKilos = (float)
    importe = (float)
  */
  int vToneladasProductos[5] = {0};
  int vProductos[5] = {0};
  float vRegiones[5] = {0};
  char maxEmpresa[30];

  int opcion;
  while (true)
  {
    system("cls");
    cout << "MENU PRINCIPAL" << endl;
    cout << "--------------" << endl;
    cout << "1) CARGAR INFORMACION" << endl;
    cout << "2) PUNTO A" << endl;
    cout << "3) PUNTO B" << endl;
    cout << "4) PUNTO C" << endl;
    cout << "5) PUNTO D" << endl;
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
      cargarInformacion(vRegiones, vProductos, maxEmpresa);
      system("pause");
      break;

    case 2:
      puntoA(vRegiones, 5);
      system("pause");
      break;

    case 3:
      puntoB(vProductos, 5);
      system("pause");
      break;

    case 4:
      puntoC(vRegiones, 5);
      system("pause");
      break;

    case 5:
      puntoD(maxEmpresa);
      system("pause");
      break;
    }
  }

  system("pause");
  return 0;
}

void cargarInformacion(float vR[], int vP[], char maxEmpresa[])
{
  int numeroDeExportacion, region, producto, empresaConMasKilosExportadosEnUnaExportacion = 0;
  char nombreExportadora[30]; // para que es maxEmpresa[30]?
  float cantidadDeKilos, importe;

  cout << "Ingrese el numero de exportacion: ";
  cin >> numeroDeExportacion;
  while (numeroDeExportacion != 0)
  {
    cout << "Ingrese la region: ";
    cin >> region;
    cout << "Ingrese el producto: ";
    cin >> producto;
    cout << "Ingrese el nombre de la exportadora: ";
    cin >> nombreExportadora;
    cout << "Ingrese la cantidad de kilos: ";
    cin >> cantidadDeKilos;
    cout << "Ingrese el importe: ";
    cin >> importe;
    //
    vR[producto - 1] += cantidadDeKilos / 1000;
    vP[producto - 1] = 1;

    if (cantidadDeKilos > empresaConMasKilosExportadosEnUnaExportacion)
    {
      empresaConMasKilosExportadosEnUnaExportacion = cantidadDeKilos;
      strcpy(maxEmpresa, nombreExportadora);
    }

    //
    cout << "Ingrese el numero de exportacion: (0 para finalizar)" << endl;
    cin >> numeroDeExportacion;
  }
}

void puntoA(float v[], int tam)
{
  cout << "Cantidad de toneladas exportadas por region: " << endl;
  for (int i = 0; i < tam; i++)
  {
    cout << "Region " << i + 1 << ": " << v[i] << endl;
  }
}

void puntoB(int v[], int tam)
{
  cout << "Los productos que no registraron exportaciones en la region pampeana son: " << endl;
  for (int i = 0; i < tam; i++)
  {
    if (v[i] == 0)
    {
      cout << "Producto N: " << i + 1 << endl;
    }
  }
}

void puntoC(float v[], int tam)
{
  cout << "La region que mas exporto en total fue la ";
  int posMax = 0;
  for (int i = 1; i < tam; i++)
  {
    if (v[i] > v[posMax])
    {
      posMax = i;
    }
  }
  cout << "Region " << posMax + 1 << endl;
}

void puntoD(char v[])
{
  cout << "La exportadora que mas exporto en total fue la " << v << endl;
}
