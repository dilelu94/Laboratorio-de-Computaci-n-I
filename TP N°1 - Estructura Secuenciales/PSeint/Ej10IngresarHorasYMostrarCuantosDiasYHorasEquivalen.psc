Algoritmo Ej10IngresarHorasYMostrarCuantosDiasYHorasEquivalen
	Escribir "Ingrese Cantidad de Horas"
	Leer horas
	dias = trunc(horas / 24)
	horasDeHora = horas % 24
	Escribir dias, " dias y ", horasDeHora, " horas"
FinAlgoritmo
