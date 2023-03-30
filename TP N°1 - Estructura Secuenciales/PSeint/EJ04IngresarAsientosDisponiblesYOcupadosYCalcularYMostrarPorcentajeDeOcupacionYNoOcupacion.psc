Algoritmo EJ04IngresarAsientosDisponiblesYOcupadosYCalcularYMostrarPorcentajeDeOcupacionYNoOcupacion
	Escribir "Ingrese Asientos Disponibles"
	Leer asientosDisponibles
	Escribir "Ingrese Asientos Ocupados"
	Leer asientosOcupados
	porcentajeOcupado = (100 * asientosOcupados) / asientosDisponibles
	porcentajeDisponible = 100 - porcentajeOcupado
	Escribir "El porcentaje De Ocupacione es del: ", porcentajeOcupado, "%"
	Escribir "El porcentaje De Asientos Disponibles es del: ", porcentajeDisponible, "%"
FinAlgoritmo
