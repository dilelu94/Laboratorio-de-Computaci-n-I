///Ejercicio: Ej13IngresarDineroARetirarYConvertirloEnEstosBilletesAEntregar
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
/*
	$1000
	$500
	$200
	$100
*/
  int dineroARetirar, billete1000, billete500, billete200, billete100, resto;
  cout << "Ingrese dinero a retirar: ";
  cin >> dineroARetirar;
  billete1000 = dineroARetirar / 1000;
  resto = dineroARetirar % 1000;
  billete500 = resto / 500;
  resto = resto % 500;
  billete200 = resto / 200;
  resto = resto % 200;
  billete100 = resto / 100;
  cout << "Billetes de $1000: " << billete1000 << endl;
  cout << "Billetes de $500: " << billete500 << endl;
  cout << "Billetes de $200: " << billete200 << endl;
  cout << "Billetes de $100: " << billete100 << endl;

  system("pause");
  return 0;
}