Algoritmo EJ07IngresarImporteDeUnaVentaYPorcentajeDeDescuentoEInformarElImporteAPagar
	Escribir "Ingrese el Importe de la Venta"
	Leer importe
	Escribir "Ingrese el Porcentaje de Descuento"
	Leer porcentaje	
	totalAPagar = (importe * (100 - porcentaje)) / 100
	Escribir totalAPagar
FinAlgoritmo
