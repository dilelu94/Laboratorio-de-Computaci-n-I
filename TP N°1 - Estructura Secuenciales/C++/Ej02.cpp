///EJercicio: EJ02IngresarDosNumerosGuardarlosEnVariablesDistintasLuegoTradearLosValoresEntreAmbasVariablesYMostrarPorPantalla
///Autor: Diego Leonel Luque
///Fecha: 29/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int primerNumero, segundoNumero, tercerNumero;
    cout << "Ingrese el Primer Numero" << endl;
    cin >> primerNumero;
    cout << "Ingrese el Segundo Numero" << endl;
    cin >> segundoNumero;
    tercerNumero = primerNumero;
    primerNumero = segundoNumero;
    segundoNumero = tercerNumero;
    cout << "El Primer Numero es: " << primerNumero << endl;
    cout << "El Segundo Numero es: " << segundoNumero << endl;
	
    system("pause");
    return 0;
}
