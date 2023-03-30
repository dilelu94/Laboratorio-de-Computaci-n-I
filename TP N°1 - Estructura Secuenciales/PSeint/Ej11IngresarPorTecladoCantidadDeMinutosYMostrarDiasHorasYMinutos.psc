Algoritmo Ej11IngresarPorTecladoCantidadDeMinutosYMostrarDiasHorasYMinutos
	Escribir "Ingrese Cantidad de Minutos"
	Leer minutos
	horas = trunc(minutos / 60)
	dias = trunc(horas / 24) 
	horasSinDias = horas - dias * 24
	minutosDeHora = minutos % 60
	Escribir dias, " dia , ", horasSinDias, " horas y ", minutosDeHora, " minutos"
FinAlgoritmo
