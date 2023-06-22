#include <iostream>
using namespace std;
const int _EMPLEADOS = 5;
void cargarFaltasRandom(int (*)[12]);
void listarFaltas(int[_EMPLEADOS][12], char[12][15]);
void buscarMaximo(int (*)[12], int *, int *);

int main(void)
{
  int mfaltasxMes[_EMPLEADOS][12], empleadoMax, mesMax;
  char mMeses[12][15] =
      {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre ", " Diciembre "};
  cargarFaltasRandom(mfaltasxMes);
  listarFaltas(mfaltasxMes, mMeses);
  system("pause");
  buscarMaximo(mfaltasxMes, &empleadoMax, &mesMax);
  cout << "El empleado " << (empleadoMax + 1) << " faltó " << mfaltasxMes[empleadoMax][mesMax] << " veces en el mes de " << mMeses[mesMax] << endl;
  system("pause");
}
void cargarFaltasRandom(int (*M)[12])
{
  int i, j;
  for (i = 0; i < _EMPLEADOS; i++)
  {
    for (j = 0; j < 12; j++)
    {
      M[i][j] = rand() % 30;
    }
  }
}
void listarFaltas(int M[_EMPLEADOS][12], char meses[12][15])
{
  int i, j;
  for (i = 0; i < 12; i++)
  {
    cout << meses[i] << endl
        << endl;
    for (j = 0; j < _EMPLEADOS; j++)
    {
      cout << "Empleado " << (j + 1) << ": " << M[j][i] << endl;
    }
    system("pause");
    system("cls");
  }
}
void buscarMaximo(int (*M)[12], int *F, int *C)
{
  int i, j, max = 0;
  for (i = 0; i < _EMPLEADOS; i++)
  {
    for (j = 0; j < 12; j++)
    {
      if (M[i][j] > max)
      {
        max = M[i][j];
        *F = i;
        *C = j;
      }
    }
  }
}