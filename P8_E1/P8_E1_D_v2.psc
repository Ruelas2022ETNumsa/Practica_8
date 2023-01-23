Algoritmo P8_E1_Dv2
	Enunciado
	Leer n
	Si n<1 & n>-1 Entonces
		finn <- N_terminos(n)
		Para i<-0 Hasta finn Hacer
			var_aux <- 2*i+1
			pot <- Potencia(n,var_aux)
			Suma <- Suma+(2/var_aux)*pot
		FinPara
		Escribir ' Sumando ',finn,' terminos, se obtiene :'
		Escribir '       S = ',Suma
	SiNo
		Escribir 'Valor invalido.'
	FinSi
	Escribir 'Terminando programa'
FinAlgoritmo

Funcion pot <- Potencia(n,end)
	pot <- 1
	Para j<-0 Hasta end-1 Hacer
		pot <- pot*((n-1)/(n+1))
	FinPara
FinFuncion

Funcion cont <- N_terminos(n)
	cont <- 0
	Repetir
		var_aux <- 2*cont+1
		t_n <- (2/var_aux)*Potencia(n,var_aux)
		cond <- t_n*100000
		cont <- cont+1
		Si cont<=7 Entonces
			Escribir ' T_',cont,' = ',t_n
		FinSi
	Hasta Que cond<>0
FinFuncion

Funcion Enunciado
	
FinFuncion
