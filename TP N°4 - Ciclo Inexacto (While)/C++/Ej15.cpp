/// Ejercicio: Ej15IngresarNumerosHastaIngresarUnCeroEInformarSiEstanOrdenadosEnFormaCreciente
/// Autor: Diego Leonel Luque
/// Fecha: 21/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	/*
		"Conjunto Ordenado"
		"Conjunto No Ordenado"
	*/
	int numero = 1, numeroAnterior = 0;
	bool ordenado = true;

	while (numero != 0)
	{
		cout << "Ingrese un numero: ";
		cin >> numero;
		if (numeroAnterior == 0)
		{
			numeroAnterior = numero;
		}
		else
		{
			if (numero != 0)
			{
				if (numeroAnterior > numero)
				{
					ordenado = false;
				}
				numeroAnterior = numero;
			}
		}
	}

	if (numero == 0)
	{
		if (ordenado == true)
		{
			cout << "Conjunto Ordenado." << endl;
		}
		else
		{
			cout << "Conjunto No Ordenado." << endl;
		}
	}

	system("pause");
	return 0;
}
