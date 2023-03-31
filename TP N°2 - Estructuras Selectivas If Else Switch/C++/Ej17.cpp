///Ejercicio: Ej17IngresarCuatroNotasDeUnAlumnoInformarDeAcuerdoALasCondiciones
///Autor: Diego Leonel Luque
///Fecha: 31/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
/*
Condiciones:
- “Promociona”, si obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.
*/
  int nota1,nota2,nota3,nota4, contar;
  cout << "Ingrese la nota del primer parcial: ";
  cin >> nota1;
  cout << "Ingrese la nota del segundo parcial: ";
  cin >> nota2;
  cout << "Ingrese la nota del tercer parcial: ";
  cin >> nota3;
  cout << "Ingrese la nota del cuarto parcial: ";
  cin >> nota4;
  if(nota1>=7 && nota2>=7 && nota3>=7 && nota4>=7){
    cout << "Promociona" << endl;
  }else{
    if(nota1>=4){
      contar++;
    }
    if(nota2>=4){
      contar++;
    }
    if(nota3>=4){
      contar++;
    }
    if(nota4>=4){
      contar++;
    }
    if(contar>=3){
      cout << "Rinde examen final" << endl;
    }else{
      if(contar>=1){
        cout << "Recupera Parciales" << endl;
      }else{
        cout << "Recursa la materia" << endl;
      }
    }
  }
  
  system("pause");
  return 0;
}