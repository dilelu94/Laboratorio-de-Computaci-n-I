/// Ejercicio: Ejpregunta2
/// Autor: Diego Leonel Luque
/// Fecha: 12/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int i=0;
  bool continuar = true;
  bool bandera_molesta = false;
  while(continuar == true){
    i++;
    if (bandera_molesta == true){
      continuar = false;
    }
    if (i % 2 == 0){
      bandera_molesta = true;
    }
    if (i % 3 == 0){
      continuar = true;
      bandera_molesta = false;
    }
  }
  cout << i << endl;
  
  system("pause");
  return 0;
}
