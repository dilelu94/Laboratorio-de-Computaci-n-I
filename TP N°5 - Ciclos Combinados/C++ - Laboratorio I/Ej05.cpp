/// Ejercicio: Ej05IngresarDiesGruposDeNumerosEnterosSeparadosPorCeros
/// Autor: Diego Leonel Luque
/// Fecha: 09/05/2023
/// Comentario: supongo que al final muestra el minimo de entre todos los grupos ya que tambien pide el numero de grupo al que pertenece y eso seria irrelevante si hubiera que mostrar para todos los grupos.

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  Informar:
  0.- Calcular el promedio de cada grupo.
  1.- Valor minimo entre todos los grupos, grupo que pertenece y su posicion en el grupo.
  2.- El mayor de los promedios y a que grupo pertenecia.
  */
  int numero = 1, numeroDeGrupo = 1, posicionEnElGrupo = 0, grupoDelMinimo = 0, promedioMayor = 0, grupoDelMayorPromedio = 0;
  int minimo = INT_MAX;
  while (numero != 0 && numeroDeGrupo <= 10)
  {
    int posicion = 1, sumaValoresDelGrupo = 0, promedioDelGrupo = 0;
    while (numero != 0)
    {
      cout << "Ingrese un numero entero: ";
      cin >> numero;
      if (numero < minimo && numero != 0)
      {
        minimo = numero;
        posicionEnElGrupo = posicion;
        grupoDelMinimo = numeroDeGrupo;
      }
      sumaValoresDelGrupo += numero;

      posicion++;
    }
    numero = 1;

    promedioDelGrupo = sumaValoresDelGrupo / (posicion - 2);
    if (promedioMayor == 0)
    {
      promedioMayor = promedioDelGrupo;
      grupoDelMayorPromedio = numeroDeGrupo;
    }
    else if (promedioDelGrupo > promedioMayor)
    {
      promedioMayor = promedioDelGrupo;
      grupoDelMayorPromedio = numeroDeGrupo;
    }

    cout << "El promedio del grupo fue :" << (float) promedioDelGrupo << endl;
    numeroDeGrupo++;
  }

  cout << "El minimo es: " << minimo << " y se encuentra en el grupo: " << grupoDelMinimo << " en la posicion: " << posicionEnElGrupo << endl;
  cout << "El mayor de los promedios fue: " << promedioMayor << " y pertenece al grupo: " << grupoDelMayorPromedio << endl;
  system("pause");
  return 0;
}
