/// Ejercicio: Ej07IngresarEncomiendasEnKilogramosFinalizaConNegativoDividirEnCamionesDeHasta200kg
/// Autor: Diego Leonel Luque
/// Fecha: 11/05/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  Informar:
  1.- Numero y peso total de cada camion.
  2.- Numero de camion con mayor cantidad de encomiendas.
  */
  int kilogramos = 0, kilogramosSobrantes = 0, camionConMasEncomiendas = 0, encomiendasMaximas = 0;
  int camion = 1;
  while (kilogramos >= 0)
  {
    int encomiendas = 0, sumaDeKilogramos = 0;
    bool kilogramosExedidos = false;

    cout << "Ingrese kilogramos de las encomienda: " << endl;
    while (kilogramosExedidos == false && kilogramos >= 0)
    {
      cin >> kilogramos;
      if (kilogramos >= 0)
      {
        sumaDeKilogramos += kilogramos + kilogramosSobrantes;
        kilogramosSobrantes = 0;
      }
      else if (kilogramos <= 0)
      {
        sumaDeKilogramos += kilogramosSobrantes;
      }

      if (sumaDeKilogramos > 200)
      {
        kilogramosExedidos = true;
        if (kilogramos >= 0)
        {
          sumaDeKilogramos = sumaDeKilogramos - kilogramos;
          kilogramosSobrantes = kilogramos;
        }
      }
      encomiendas++;
    }
    cout << "El camion: " << camion << " pesa: " << sumaDeKilogramos << endl;
    if (encomiendas >= encomiendasMaximas)
    {
      encomiendasMaximas = encomiendas;
      camionConMasEncomiendas = camion;
    }
    camion++;
  }
  cout << "El camion con mayor cantidad de encomiendas es: " << camionConMasEncomiendas << " con: " << encomiendasMaximas << " encomiendas." << endl;
  system("pause");
  return 0;
}
