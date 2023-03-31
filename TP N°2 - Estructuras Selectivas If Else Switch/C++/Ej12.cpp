///Ejercicio: 12IngresarTresNumerosInformarElNumeroMedio
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  int n1,n2,n3;
  cout << "Ingrese el primer numero: " << endl;
  cin >> n1;
  cout << "Ingrese el segundo numero: " << endl;
  cin >> n2;
  cout << "Ingrese el tercer numero: " << endl;
  cin >> n3;
  if(n1>n2 && n1<n3 || n1<n2 && n1>n3){
    cout << "El numero medio es: " << n1 << endl;
  }else if(n2>n1 && n2<n3 || n2<n1 && n2>n3){
    cout << "El numero medio es: " << n2 << endl;
  }else if(n3>n1 && n3<n2 || n3<n1 && n3>n2){
    cout << "El numero medio es: " << n3 << endl;
  }else{
    cout << "Los numeros son iguales" << endl;
  }

  system("pause");
  return 0;
}