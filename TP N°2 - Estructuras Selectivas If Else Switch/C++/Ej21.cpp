///Ejercicio: Ej21IngresarNumeroDeMesEInformarTrimesteAlQuePerteneceEnLaLista
///Autor: Diego Leonel Luque
///Fecha: 31/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
/*
Lista:
Mes 1, 2 y 3. Trimestre 1. Mes 4, 5 y 6. Trimestre 2.
Mes 7, 8 y 9. Trimestre 3. Mes 10, 11 y 12. Trimestre 4.
*/
  int mes;
  cout << "Ingrese el numero de mes: ";
  cin >> mes;
  if (mes>=1 && mes<=3){
    cout << "Trimestre 1" << endl;
  }else if (mes>=4 && mes<=6){
    cout << "Trimestre 2" << endl;
  }else if (mes>=7 && mes<=9){
    cout << "Trimestre 3" << endl;
  }else if (mes>=10 && mes<=12){
    cout << "Trimestre 4" << endl;
  }else{
    cout << "El numero ingresado no corresponde a un mes." << endl;
  }
  
  system("pause");
  return 0;
}