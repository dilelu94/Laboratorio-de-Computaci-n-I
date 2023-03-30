Algoritmo EJ05IngresarCantidadVendidaDeLosAlfajoresAyByCyMostrarPorcentajeVendidoDeCadaUno
	Escribir "Ingrese la Cantidad Vendida del Alfajor A"
	Leer alfajorA
	Escribir "Ingrese la Cantidad Vendida del Alfajor B"
	Leer alfajorB
	Escribir "Ingrese la Cantidad Vendida del Alfajor C"
	Leer alfajorC
	totalVendidos = alfajorA + alfajorB + alfajorC
	porcentajeA = (100 * alfajorA) / totalVendidos
	porcentajeB = (100 * alfajorB) / totalVendidos
	porcentajeC = (100 * alfajorC) / totalVendidos
	Escribir "A: ", porcentajeA, "%"
	Escribir "B: ", porcentajeB, "%"
	Escribir "C: ", porcentajeC, "%"
FinAlgoritmo
