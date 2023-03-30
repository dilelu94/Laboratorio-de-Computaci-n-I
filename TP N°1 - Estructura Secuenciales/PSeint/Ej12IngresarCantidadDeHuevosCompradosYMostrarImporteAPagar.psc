Algoritmo Ej12IngresarCantidadDeHuevosCompradosYMostrarImporteAPagar
	//docenea = $100
	//cada huevo x $12
	Escribir "Ingrese Cantidad de Huevos"
	Leer huevos
	docenas = trunc(huevos / 12) * 100
	huevosSueltos = (huevos % 12) * 12
	importe = docenas + huevosSueltos
	Escribir "Importe Total a Pagar: ", importe
FinAlgoritmo
