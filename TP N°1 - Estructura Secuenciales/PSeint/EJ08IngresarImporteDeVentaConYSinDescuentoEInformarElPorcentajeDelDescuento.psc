Algoritmo EJ08IngresarImporteDeVentaConYSinDescuentoEInformarElPorcentajeDelDescuento
	Escribir "Ingrese Importe con Descuento"
	Leer importeConDescuento
	Escribir "Ingrese Importe sin Descuento"
	Leer importeSinDescuento
	porcentaje = ((importeSinDescuento - importeConDescuento) * 100) / importeSinDescuento
	Escribir "El Porcentaje es de:", porcentaje
FinAlgoritmo
