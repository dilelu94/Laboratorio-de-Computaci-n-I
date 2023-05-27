/// Ejercicio: Ej07IngresarDiezNumerosEInformarIndiceDeUnNuevoNumeroIngresadoSiExisteEnCasoContrarioMostrarValorIndiceIgualAMenosUno
/// Autor: Diego Leonel Luque
/// Fecha: 25/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  
  */
  float numeros[10];
  float numero;
  bool encontrado = false;
  int indice = 0;
  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
  }
  cout << "Ingrese un numero a buscar: ";
  cin >> numero;
  for (int i = 0; i < 10; i++)
  {
    if (numeros[i] == numero)
    {
      indice = i;
      encontrado = true;
    }
  }
  if (encontrado)
  {
    cout << "Indice: " << indice << endl;
  }
  else
  {
    //esto es lo de indice -1??? ni idea la verdad. (muestra {numero} por algun movito)
    cout << "Indice: " << numeros[-1] << endl;
  }
  

  
  system("pause");
  return 0;
}
