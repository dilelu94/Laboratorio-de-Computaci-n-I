///Ejercicio: Ej18IngresarCuatroNumerosInformarSiFueronIngresadosEnOrdenCrecienteDeLoContrarioInformarConjuntoDesordenado
///Autor: Diego Leonel Luque
///Fecha: 31/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  int numero1, numero2, numero3, numero4;
  cout << "Ingrese el primer numero: ";
  cin >> numero1;
  cout << "Ingrese el segundo numero: ";
  cin >> numero2;
  cout << "Ingrese el tercer numero: ";
  cin >> numero3;
  cout << "Ingrese el cuarto numero: ";
  cin >> numero4;
  if (numero1 <= numero2 && numero2 <= numero3 && numero3 <= numero4){
    cout << "Conjunto Ordenado" << endl;
  } else {
    cout << "Conjunto Desordenado" << endl;
  }

  system("pause");
  return 0;
}