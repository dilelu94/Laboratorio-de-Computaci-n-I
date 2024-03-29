/// Ejercicio: EjFuncionQueRecibaTresNumerosYRetorneElMayor
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

float mayorDeUnaListaDeTresNumeros(float num[]);

int main()
{
  float numeros[3];

  for (int i = 0; i < 3; i++)
  {
    cout << "Ingrese el numero " << i + 1 << ": ";
    cin >> numeros[i];
  }

  cout << "El mayor de los numeros ingresados es: " << mayorDeUnaListaDeTresNumeros(numeros) << endl;

  system("pause");
  return 0;
}

float mayorDeUnaListaDeTresNumeros(float num[])
{
  float mayor = num[0];
  for (int i = 1; i < 3; i++)
  {
    if (num[i] > mayor)
    {
      mayor = num[i];
    }
  }
  return mayor;
}