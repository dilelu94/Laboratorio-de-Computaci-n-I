Algoritmo EJ06IngresarRecaudacionEnPesosDeCuatroSemanasMostrarElPromedioYPorcentajeDeCadaSemana
	Escribir "Ingrese la Recaudacion de Cada Semana"
	Leer semanaUno
	Leer semanaDos
	Leer semanaTres
	Leer semanaCuatro
	totalRecaudado = semanaUno + semanaDos + semanaTres + semanaCuatro
	promedio = totalRecaudado / 4
	porcentajeSemanaUno = (100 * semanaUno) / totalRecaudado
	porcentajeSemanaDos = (100 * semanaDos) / totalRecaudado
	porcentajeSemanaTres = (100 * semanaTres) / totalRecaudado
	porcentajeSemanaCuatro = (100 * semanaCuatro) / totalRecaudado
	Escribir "La recaudacion promedio es de :", promedio
	Escribir "El Porcentaje de la 1er Semana es: ", porcentajeSemanaUno, "%"
	Escribir "El Porcentaje de la 2da Semana es: ", porcentajeSemanaDos, "%"
	Escribir "El Porcentaje de la 3ra Semana es: ", porcentajeSemanaTres, "%"
	Escribir "El Porcentaje de la 4ta Semana es: ", porcentajeSemanaCuatro, "%"
FinAlgoritmo
