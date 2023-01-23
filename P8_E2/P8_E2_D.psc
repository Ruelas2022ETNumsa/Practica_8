Algoritmo P8_E2_D
	Escribir "ingresar n valor";
	leer n;
	
	Para i <- 1 Hasta n Con Paso 1 Hacer
		Para j <- 1 Hasta 2*n-1 Con Paso 1 Hacer
			Si j<=i Entonces
				Escribir Sin Saltar" ",j;
				Si i=j Entonces
					var_aux<-j-1;
				Fin Si
			SiNo
				Si var_aux<>0 Entonces
					Repetir
						Escribir Sin Saltar" ",var_aux;
						var_aux<-var_aux-1;
					Mientras Que var_aux>0
				Fin Si
			Fin Si
		Fin Para
		Escribir "";
	Fin Para
	
FinAlgoritmo
