Algoritmo Ej13IngresarDineroARetirarYConvertirloEnEstosBilletesAEntregar
	//$1000
	//$500
	//$200
	//$100
	Escribir "Ingrese Dinero a Retirar"
	Leer dineroARetirar
	billetesDeMil = trunc(dineroARetirar / 1000)
	resto = dineroARetirar % 1000
	billetesDeQuinientos = trunc(resto / 500)
	resto = resto % 500
	billetesDeDocientos = trunc(resto / 200)
	resto = resto % 200
	billetesDeCien = trunc(resto / 100)
	Escribir "Se deberan entregar ", billetesDeMil, " de $1000, ", billetesDeQuinientos, " de $500, ", billetesDeDocientos, " de $200, ", billetesDeCien, " de $100"
FinAlgoritmo
