///Ejercicio: EJ03IngresarLaCantidadDeAutosVendidosDeUnVendedorYMostrarElSueldoTotalAPagarle
///Autor: Diego Leonel Luque
///Fecha: 30/03/2023
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int autosVendidos, sueldo;
    cout << "Ingrese la Cantidad de Autos Vendidos" << endl;
//si cantidad de autos vendidos mayor a 0 sueldo = autosVendidos * 20000 + 150000
    cin >> autosVendidos;
    if (autosVendidos > 0){
        sueldo = autosVendidos * 20000 + 150000;
        cout << "El sueldo es: " << sueldo << endl;
    }
    else{
        cout << "El sueldo es: " << 150000 << endl;
    }

    system("pause");
    return 0;
}