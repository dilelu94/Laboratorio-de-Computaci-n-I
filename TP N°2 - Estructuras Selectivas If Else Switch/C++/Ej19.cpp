///Ejercicio: Ej19IngresarKilovatiosYCalcularEnBaseAlConsumo
///Autor: Diego Leonel Luque
///Fecha: 31
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
/*
Consumo:
$ 10 por kilovatio hasta los primeros 100 kilovatios de consumo.
$ 12 por kilovatio entre de 101 a 200 inclusives kilovatios.
$ 15 por kilovatio mas 201 kilovatios inclusive.
*/
  int kilovatios, totalAPagar;
  cout << "Ingrese la cantidad de kilovatios consumidos: ";
  cin >> kilovatios;
  if(kilovatios <= 100){
    totalAPagar = kilovatios * 10;
  }else{
    if(kilovatios <= 200){
      totalAPagar = (100 * 10) + ((kilovatios - 100) * 12);
    }else{
      totalAPagar = (100 * 10) + (100 * 12) + ((kilovatios - 200) * 15);
    }
  }
  cout << "El total a pagar es: $" << totalAPagar << endl;
  
  system("pause");
  return 0;
}