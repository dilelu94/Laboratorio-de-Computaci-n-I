Algoritmo EJ03IngresarLaCantidadDeAutosVendidosDeUnVendedorYMostrarElSueldoTotalAPagarle
	//sueldo fijo $150000
	//$20000 x auto vendido
	Escribir "Ingrese Cantidad de Autos Que Vendio el Vendedor"
	Leer cantidadDeAutosVendidos
	Si cantidadDeAutosVendidos > 0 Entonces
		sueldo = cantidadDeAutosVendidos * 20000 + 150000
	SiNo
		sueldo = 150000
	Fin Si
	Escribir "El sueldo Del Vendedor Corresponde a: $", sueldo
FinAlgoritmo
