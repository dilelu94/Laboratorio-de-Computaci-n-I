/// Ejercicio: Ejpregunta1
/// Autor: Diego Leonel Luque
/// Fecha: 12/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int ac=0,con, num, cpos=0, v;
  float pro, porpos;
  for (v=1;v<=10 ;v++){
    cout<<"Ingrese un numero: "<<v<< " de la lista:";
    cin>>num;
    ac+=num;
    con++;
    if(num>=0){
      cpos++;
    }
  }
  cout<<"La suma de los numeros ingresados es: "<<ac;
  pro = (float)ac/con;
  cout<<"El promedio de los numeros es: "<<pro;
  porpos = (float)cpos*10/100;
  cout<<"El porcentaje de numeros positivos es: "<<porpos;
  
  return 0;
}
