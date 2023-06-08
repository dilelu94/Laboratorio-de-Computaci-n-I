/// Ejercicio: Ej02FuncionQueRecibaDosNumerosYRetorneLaSumaDeAmbos
/// Autor: Diego Leonel Luque
/// Fecha: 27/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

float sumaDeDosNumeros(float num1, float num2);

int main()
{
  int numero1, numero2;
  cout << "Ingrese un numero: ";
  cin >> numero1;
  cout << "Ingrese otro numero: ";
  cin >> numero2;

  int resultadoSuma = sumaDeDosNumeros(numero1, numero2);

  cout << "La suma de ambos numeros es: " << resultadoSuma << endl;
  
  system("pause");
  return 0;
}

float sumaDeDosNumeros(float num1, float num2)
{
  return num1 + num2;
}