Algoritmo P8_E3_D
	Escribir "ingresar n valor";
	leer n;
	Escribir "";
	var_aux<-0;
	Para i<-1 Hasta n Con Paso 1 Hacer
		Para j<-1 Hasta 2*n-1-var_aux Con Paso 1 Hacer
			Si i<=j Entonces
				Escribir Sin Saltar" *";
				Si i=j Entonces
					var_aux<-j;
				Fin Si
			SiNo
				Escribir Sin Saltar"  ";
			Fin Si
		Fin Para
		Escribir "";
	Fin Para
FinAlgoritmo