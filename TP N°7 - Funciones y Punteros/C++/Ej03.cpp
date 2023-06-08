/// Ejercicio: Ej03FuncionQueRecibaTresNumerosYRetorneElPromedio
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

float promedioDeTresNumeros(float num1, float num2, float num3);

int main()
{
  int numero1, numero2, numero3, numeroIngresado;

  for (int numero = 1; numero <= 3; numero++)
  {
    cout << "Ingrese el numero " << numero << ": ";
    cin >> numeroIngresado;

    switch (numero)
    {
    case 1:
      numero1 = numeroIngresado;
      break;
    case 2:
      numero2 = numeroIngresado;
      break;
    case 3:
      numero3 = numeroIngresado;
      break;
    }
  }

  int resultadoPromedio = promedioDeTresNumeros(numero1, numero2, numero3);

  cout << "El promedio de los tres numeros es: " << resultadoPromedio << endl;

  system("pause");
  return 0;
}

float promedioDeTresNumeros(float num1, float num2, float num3)
{
  return (num1 + num2 + num3) / 3;
}