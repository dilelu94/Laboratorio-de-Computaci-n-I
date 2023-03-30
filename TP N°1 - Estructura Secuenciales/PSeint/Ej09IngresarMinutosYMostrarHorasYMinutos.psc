Algoritmo Ej09IngresarMinutosYMostrarHorasYMinutos
	Escribir "Ingrese Cantidad de Minutos"
	Leer minutos
	horas = trunc(minutos / 60)
	minutosDeHora = minutos % 60
	Escribir horas, " horas y ", minutosDeHora, " minutos"
FinAlgoritmo
