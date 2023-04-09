///Ejercicio: Ej06IngresarIndexDeUnaListaYValoresDeLosElementosDeLaLista
///Autor: Diego Leonel Luque
///Fecha: 08/04/2023
///Comentario:

#include<iostream>
#include<cstdlib>
#include<list>

using namespace std;

int main(){
/*

*/
int index, ;
std::list<int> numbers = {};
cout << "Ingrese N: ";
cin >> numero1;
cout << "Ingrese los numeros de la lista: ";
cin >> numero2;

 if (numero1 > numero2){
    numeroMayor = numero1;
    numeroMenor = numero2;
  } else {
    numeroMayor = numero2;
    numeroMenor = numero1;
  }

do{
    numeroMenor = numeroMenor + 1;
    cout << numeroMenor << endl;
}while(numeroMenor < numeroMayor);

  system("pause");
  return 0;
}