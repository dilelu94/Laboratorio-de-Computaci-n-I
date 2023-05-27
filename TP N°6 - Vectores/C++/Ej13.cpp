/// Ejercicio: Ej13IngresarDiezNumerosLuegoIngresarDosNumerosAYBMenoresADiezEInformarElMaximoDelVectorEntreAYB
/// Autor: Diego Leonel Luque
/// Fecha: 25/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float numeros[10];
  float a, b;
  float maximo = 0;

  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
  }

  cout << "Ingrese dos numeros menores a 10: ";
  cin >> a >> b;

  for (int i = 0; i < 10; i++)
  {
    if (maximo == 0 && numeros[i] > a && numeros[i] < b)
    {
      maximo = numeros[i];
    }
    else if (numeros[i] > maximo && numeros[i] > a && numeros[i] < b)
    {
      maximo = numeros[i];
    }
  }
  cout << "El maximo valor entre " << a << " y " << b << " es: " << maximo << endl;

  system("pause");
  return 0;
}
