/// Ejercicio: Ej17IngresarTresNumerosDistintosInformarElNumeroDelMedio
/// Autor: Diego Leonel Luque
/// Fecha: 10/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float numero[3];
    cout << "Ingrese tres numeros distintos: " << endl;
    cin >> numero[0] >> numero[1] >> numero[2];

    // Ordenar los numeros de menor a mayor
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (numero[i] > numero[j])
            {
                float temp = numero[i];
                numero[i] = numero[j];
                numero[j] = temp;
            }
        }
    }

    cout << "El numero del medio es: " << numero[1] << endl;

    system("pause");
    return 0;
}
