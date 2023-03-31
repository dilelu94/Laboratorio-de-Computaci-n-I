///Ejercicio: Ej20IngresarNumeroDeMesEInformarBimestreAlQuePerteneceEnLaLista
///Autor: Diego Leonel Luque
///Fecha: 31
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
/*
Lista:
Mes 1 y 2. Bimestre 1. Mes 3 y 4. Bimestre 2. Mes 5 y 6. Bimestre 3.
Mes 7 y 8. Bimestre 4. Mes 9 y 10. Bimestre 5. Mes 11 y 12. Bimestre 6.
*/
  int mes;
  cout << "Ingrese un numero de mes: ";
  cin >> mes;
  if (mes >= 1 && mes <= 2){
    cout << "El mes " << mes << " pertenece al bimestre 1." << endl;
  } else if (mes >= 3 && mes <= 4){
    cout << "El mes " << mes << " pertenece al bimestre 2." << endl;
  } else if (mes >= 5 && mes <= 6){
    cout << "El mes " << mes << " pertenece al bimestre 3." << endl;
  } else if (mes >= 7 && mes <= 8){
    cout << "El mes " << mes << " pertenece al bimestre 4." << endl;
  } else if (mes >= 9 && mes <= 10){
    cout << "El mes " << mes << " pertenece al bimestre 5." << endl;
  } else if (mes >= 11 && mes <= 12){
    cout << "El mes " << mes << " pertenece al bimestre 6." << endl;
  } else {
    cout << "El numero ingresado no corresponde a un mes." << endl;
  }

  system("pause");
  return 0;
}