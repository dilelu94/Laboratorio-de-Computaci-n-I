/// Ejercicio: EjMatriz
/// Autor: Diego Leonel Luque
/// Fecha: 03/06/2023
/// Comentario: Estaria bueno que lo expliquen en alguna clase a esto, porque no lo entiendo.

#include <iostream>
#include <cstdlib>

using namespace std;

/*
dia, importe.
los registros corresponden al mes de septiembre
finaliza el lote de registros con un dia == 0
Calcular e informar la recaudacion diaria.

modificar para que permita saber la recaudacion de cada dia de cada mes del año.
*/

void ponerCeroM(float m[][31], int fila, int columna);
void mostrarMatriz(float m[][31], int fila, int columna);

int main()
{
  float importe, mImp[12][31]; // 12 meses, 31 dias
  int dia, mes;
  ponerCeroM(mImp, 12, 31);
  cout << "DIA: ";
  cin >> dia;
  while (dia != 0)
  {
    cout << "MES: ";
    cin >> mes;
    cout << "IMPORTE: ";
    cin >> importe;
    mImp[mes - 1][dia - 1] += importe; // por que dia - 1? porque el vector empieza en 0
    cout << "DIA: ";
    cin >> dia;
  }
  cout << "RECAUDACION POR DIA DE CADA MES: " << endl;
  mostrarMatriz(mImp, 12, 31);

  cout << endl;
  system("pause");
  return 0;
}

void ponerCeroM(float m[][31], int fila, int columna)
{
  int i, j;
  for (i = 0; i < fila; i++)
  {
    for (j = 0; j < columna; j++)
    {
      m[i][j] = 0;
    }
  }
}

void mostrarMatriz(float m[][31], int fila, int columna)
{
  int i, j;
  for (i = 0; i < fila; i++)
  {
    for (j = 0; j < columna; j++)
    {
      if (m[i][j] > 0)
        cout << "DIA " << j + 1 << "\t" "MES " << i + 1 << "\t" "IMPORTE: " << m[i][j] << endl;
    }
  }
}