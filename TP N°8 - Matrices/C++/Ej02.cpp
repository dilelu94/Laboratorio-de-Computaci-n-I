/// Ejercicio: EjIngresarInformacionDeLosViajesDeLaFlotaDe30ChoferesDuranteElMesAnterior
/// Autor: Diego Leonel Luque
/// Fecha: 18/06/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  - Día (1 a 31)  
  - Número de chofer (1 a 30)  
  - Cantidad de kilómetros recorridos en ese viaje  
  - Cantidad de piezas rotas en ese viaje 

  Este lote finaliza con un registro con día igual a cero.
  Se generó un registro por cada viaje realizado
  (uede haber más de un registro para el mismo día y para el mismo chofer.)

  Informar:
  a) Cual fue el número de chofer que haya totalizado menor cantidad de piezas rotas. Tener 
  en cuenta que los choferes que no realizaron viajes ese día, no deben ser considerados. 
  b) Informar cual es el número de chofer que haya recorrido mayor cantidad total de 
  kilómetros en todo el mes. 
  c) Informar para cada número de chofer el promedio de roturas entre todos los viajes 
  realizados en la primera quincena(día 1 a 15) y los realizados en la segunda quincena (día 
  16 a 31).  El formato será:     Cód. de Chofer  Prom. 1º Quinc. Prom. 2º Quinc.             999                999,99           999,99
  */
  
  int mViajes[31][3] = {0}, dia, chofer, kilometros, piezas, maxKm = 0, maxPiezas;
  

  system("pause");
  return 0;
}
