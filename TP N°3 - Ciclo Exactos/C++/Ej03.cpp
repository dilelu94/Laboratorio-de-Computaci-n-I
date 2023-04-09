///Ejercicio: Ej03MostrarPorPantallaLosNumerosDelVeinteAlUno
///Autor: Diego Leonel Luque
///Fecha: 08/04/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
/*
contador con un ciclo del 20 al 1
*/
int contador;
contador = 20;
do{
    cout << contador << endl;
    contador = contador - 1;
}while(contador >= 1 );

  system("pause");
  return 0;
}